// Copyright 2020 © Jeff Epler for Adafruit Industries. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full
// license information.

#if defined(ADAFRUIT_FEATHER_M4_CAN)
#include <stdint.h>
#include <stdlib.h>

#include "CANSAME5x.h"
#include "wiring_private.h"

#include "same51.h"

namespace {
#include "CANSAME5x_port.h"
}

#define hw (reinterpret_cast<Can *>(this->_hw))
#define state (reinterpret_cast<_canSAME5x_state *>(this->_state))

#define DIV_ROUND(a, b) (((a) + (b) / 2) / (b))
#define DIV_ROUND_UP(a, b) (((a) + (b)-1) / (b))

#define GCLK_CAN1 GCLK_PCHCTRL_GEN_GCLK1_Val
#define GCLK_CAN0 GCLK_PCHCTRL_GEN_GCLK1_Val
#define ADAFRUIT_ZEROCAN_TX_BUFFER_SIZE (1)
#define ADAFRUIT_ZEROCAN_RX_FILTER_SIZE (1)
#define ADAFRUIT_ZEROCAN_RX_FIFO_SIZE (8)
#define ADAFRUIT_ZEROCAN_MAX_MESSAGE_LENGTH (8)

namespace {

template <class T, std::size_t N>
constexpr size_t size(const T (&array)[N]) noexcept {
  return N;
}

// Adapted from ASF3 interrupt_sam_nvic.c:

volatile unsigned long cpu_irq_critical_section_counter = 0;
volatile unsigned char cpu_irq_prev_interrupt_state = 0;

void cpu_irq_enter_critical(void) {
  if (!cpu_irq_critical_section_counter) {
    if (__get_PRIMASK() == 0) { // IRQ enabled?
      __disable_irq();          // Disable it
      __DMB();
      cpu_irq_prev_interrupt_state = 1;
    } else {
      // Make sure the to save the prev state as false
      cpu_irq_prev_interrupt_state = 0;
    }
  }

  cpu_irq_critical_section_counter++;
}

void cpu_irq_leave_critical(void) {
  // Check if the user is trying to leave a critical section
  // when not in a critical section
  if (cpu_irq_critical_section_counter > 0) {
    cpu_irq_critical_section_counter--;

    // Only enable global interrupts when the counter
    // reaches 0 and the state of the global interrupt flag
    // was enabled when entering critical state */
    if ((!cpu_irq_critical_section_counter) && cpu_irq_prev_interrupt_state) {
      __DMB();
      __enable_irq();
    }
  }
}

// This appears to be a typo (transposition error) in the ASF4 headers
// It's called the "Extended ID Filter Entry"
typedef CanMramXifde CanMramXidfe;

typedef uint32_t can_filter_t;

struct _canSAME5x_tx_buf {
  CAN_TXBE_0_Type txb0;
  CAN_TXBE_1_Type txb1;
  __attribute__((aligned(4))) uint8_t data[8];
};

struct _canSAME5x_rx_fifo {
  CAN_RXF0E_0_Type rxf0;
  CAN_RXF0E_1_Type rxf1;
  __attribute((aligned(4))) uint8_t data[ADAFRUIT_ZEROCAN_MAX_MESSAGE_LENGTH];
} can_rx_fifo_t;

struct _canSAME5x_state {
  _canSAME5x_tx_buf tx_buffer[ADAFRUIT_ZEROCAN_TX_BUFFER_SIZE];
  _canSAME5x_rx_fifo rx_fifo[ADAFRUIT_ZEROCAN_RX_FIFO_SIZE];
  CanMramSidfe standard_rx_filter[ADAFRUIT_ZEROCAN_RX_FILTER_SIZE];
  CanMramXifde extended_rx_filter[ADAFRUIT_ZEROCAN_RX_FILTER_SIZE];
};

// This data must be in the first 64kB of RAM.  The "canram" section
// receives special support from the linker file in the Feather M4 CAN's
// board support package.
__attribute__((section(".canram"))) _canSAME5x_state can_state[2];

constexpr uint32_t can_frequency = VARIANT_GCLK1_FREQ;
bool compute_nbtp(uint32_t baudrate, CAN_NBTP_Type &result) {
  uint32_t clocks_per_bit = DIV_ROUND(can_frequency, baudrate);
  uint32_t clocks_to_sample = DIV_ROUND(clocks_per_bit * 7, 8);
  uint32_t clocks_after_sample = clocks_per_bit - clocks_to_sample;
  uint32_t divisor = max(DIV_ROUND_UP(clocks_to_sample, 256),
                         DIV_ROUND_UP(clocks_after_sample, 128));
  if (divisor > 32) {
    return false;
  }
  result.bit.NTSEG1 = DIV_ROUND(clocks_to_sample, divisor) - 2;
  result.bit.NTSEG2 = DIV_ROUND(clocks_after_sample, divisor) - 1;
  result.bit.NBRP = divisor - 1;
  result.bit.NSJW = DIV_ROUND(clocks_after_sample, divisor * 4);
  return true;
}

EPioType find_pin(const can_function *table, size_t n, int arduino_pin,
                  int &instance) {
  if (arduino_pin < 0 || arduino_pin > PINS_COUNT) {
    return (EPioType)-1;
  }

  unsigned port = g_APinDescription[arduino_pin].ulPort;
  unsigned pin = g_APinDescription[arduino_pin].ulPin;
  for (size_t i = 0; i < n; i++) {
    if (table[i].port == port && table[i].pin == pin) {
      if (instance == -1 || table[i].instance == instance) {
        Serial.print("found #");
        Serial.println(i);
        instance = table[i].instance;
        return EPioType(table[i].mux);
      }
    }
  }
  return (EPioType)-1;
}

} // namespace

CANSAME5x::CANSAME5x(uint8_t TX_PIN, uint8_t RX_PIN)
    : _tx(TX_PIN), _rx(RX_PIN) {}
#ifdef PIN_CAN_TX
CANSAME5x::CANSAME5x() : _tx(PIN_CAN_TX), _rx(PIN_CAN_RX) {}
#else
CANSAME5x::CANSAME5x() : _tx(-1) {}
#endif

CANSAME5x::~CANSAME5x() {}

int CANSAME5x::begin(long baudrate) {
  if (_tx == -1) {
    return 0;
  }

  Serial.print("_rx ");
  Serial.print(_rx);
  Serial.print(" ulPort=");
  Serial.print(g_APinDescription[_rx].ulPort);
  Serial.print(" ulPin=");
  Serial.println(g_APinDescription[_rx].ulPin);

  Serial.println("rx pin table");
  for (size_t i = 0; i < size(can_rx); i++) {
    Serial.print(i);
    Serial.print(" port=");
    Serial.print(can_rx[i].port);
    Serial.print(" pin=");
    Serial.print(can_rx[i].pin);
    Serial.print(" instance=");
    Serial.println(can_rx[i].instance);
  }

  Serial.print("_tx ");
  Serial.print(_tx);
  Serial.print(" ulPort=");
  Serial.print(g_APinDescription[_tx].ulPort);
  Serial.print(" ulPin=");
  Serial.println(g_APinDescription[_tx].ulPin);

  Serial.println("tx pin table");
  for (size_t i = 0; i < size(can_tx); i++) {
    Serial.print(i);
    Serial.print(" port=");
    Serial.print(can_tx[i].port);
    Serial.print(" pin=");
    Serial.print(can_tx[i].pin);
    Serial.print(" instance=");
    Serial.println(can_tx[i].instance);
  }

  int instance = -1;
  EPioType tx_function = find_pin(can_tx, size(can_tx), _tx, instance);
  EPioType rx_function = find_pin(can_rx, size(can_rx), _rx, instance);

  if (tx_function == EPioType(-1) || rx_function == EPioType(-1) ||
      instance == -1) {
    return 0;
  }

  CAN_NBTP_Type nbtp;
  if (!compute_nbtp(baudrate, nbtp)) {
    return 0;
  }

  _idx = instance;
  _hw = reinterpret_cast<void *>(_idx == 0 ? CAN0 : CAN1);
  _state = reinterpret_cast<void *>(&can_state[_idx]);

  memset(state, 0, sizeof(*state));

  pinPeripheral(_tx, tx_function);
  pinPeripheral(_rx, rx_function);

  if (_idx == 0) {
    GCLK->PCHCTRL[CAN0_GCLK_ID].reg = GCLK_CAN0 | (1 << GCLK_PCHCTRL_CHEN_Pos);
  } else {
    GCLK->PCHCTRL[CAN1_GCLK_ID].reg = GCLK_CAN1 | (1 << GCLK_PCHCTRL_CHEN_Pos);
  }
  // reset and allow configuration change
  hw->CCCR.bit.INIT = 1;
  while (!hw->CCCR.bit.INIT) {
  }
  hw->CCCR.bit.CCE = 1;

  // All TX data has an 8 byte payload (max)
  {
    CAN_TXESC_Type esc = {};
    esc.bit.TBDS = CAN_TXESC_TBDS_DATA8_Val;
    hw->TXESC.reg = esc.reg;
  }

  // Set up TX buffer
  {
    CAN_TXBC_Type bc = {};
    bc.bit.TBSA = (uint32_t)state->tx_buffer;
    bc.bit.NDTB = ADAFRUIT_ZEROCAN_TX_BUFFER_SIZE;
    bc.bit.TFQM = 0; // Messages are transmitted in the order submitted
    hw->TXBC.reg = bc.reg;
  }

  // All RX data has an 8 byte payload (max)
  {
    CAN_RXESC_Type esc = {};
    esc.bit.F0DS = CAN_RXESC_F0DS_DATA8_Val;
    esc.bit.F1DS = CAN_RXESC_F1DS_DATA8_Val;
    esc.bit.RBDS = CAN_RXESC_RBDS_DATA8_Val;
    hw->RXESC.reg = esc.reg;
  }

  // Set up RX fifo 0
  {
    CAN_RXF0C_Type rxf = {};
    rxf.bit.F0SA = (uint32_t)state->rx_fifo;
    rxf.bit.F0S = ADAFRUIT_ZEROCAN_RX_FIFO_SIZE;
    hw->RXF0C.reg = rxf.reg;
  }

  // Reject all packets not explicitly requested
  {
    CAN_GFC_Type gfc = {};
    gfc.bit.RRFE = 0;
    gfc.bit.ANFS = CAN_GFC_ANFS_REJECT_Val;
    gfc.bit.ANFE = CAN_GFC_ANFE_REJECT_Val;
    hw->GFC.reg = gfc.reg;
  }

  // Initially, receive all standard and extended packets to FIFO 0
  state->standard_rx_filter[0].SIDFE_0.bit.SFID1 = 0; // ID
  state->standard_rx_filter[0].SIDFE_0.bit.SFID2 = 0; // mask
  state->standard_rx_filter[0].SIDFE_0.bit.SFEC = CAN_SIDFE_0_SFEC_STF0M_Val;
  state->standard_rx_filter[0].SIDFE_0.bit.SFT = CAN_SIDFE_0_SFT_CLASSIC_Val;

  state->extended_rx_filter[0].XIDFE_0.bit.EFID1 = 0; // ID
  state->extended_rx_filter[0].XIDFE_0.bit.EFEC = CAN_XIDFE_0_EFEC_STF0M_Val;
  state->extended_rx_filter[0].XIDFE_1.bit.EFID2 = 0; // mask
  state->extended_rx_filter[0].XIDFE_1.bit.EFT = CAN_XIDFE_1_EFT_CLASSIC_Val;

  // Set up standard RX filters
  {
    CAN_SIDFC_Type dfc = {};
    dfc.bit.LSS = ADAFRUIT_ZEROCAN_RX_FILTER_SIZE;
    dfc.bit.FLSSA = (uint32_t)state->standard_rx_filter;
    hw->SIDFC.reg = dfc.reg;
  }

  // Set up extended RX filters
  {
    CAN_XIDFC_Type dfc = {};
    dfc.bit.LSE = ADAFRUIT_ZEROCAN_RX_FILTER_SIZE;
    dfc.bit.FLESA = (uint32_t)state->extended_rx_filter;
    hw->XIDFC.reg = dfc.reg;
  }

  // Enable receive IRQ (masked until enabled in NVIC)
  hw->IE.bit.RF0NE = true;
  if (_idx == 0) {
    hw->ILE.bit.EINT0 = true;
  } else {
    hw->ILE.bit.EINT1 = true;
  }
  hw->ILS.bit.RF0NL = _idx;

  // Set nominal baud rate
  hw->NBTP.reg = nbtp.reg;

  // hardware is ready for use
  hw->CCCR.bit.CCE = 0;
  hw->CCCR.bit.INIT = 0;
  while (hw->CCCR.bit.INIT) {
  }

  instances[_idx] = this;

  return 1;
}

void CANSAME5x::end() {
  instances[_idx] = 0;
  pinMode(_tx, INPUT);
  pinMode(_rx, INPUT);
  // reset and disable clock
  hw->CCCR.bit.INIT = 1;
  while (!hw->CCCR.bit.INIT) {
  }
  if (_idx == 0) {
    GCLK->PCHCTRL[CAN0_GCLK_ID].reg = 0;
  } else {
    GCLK->PCHCTRL[CAN1_GCLK_ID].reg = 0;
  }
}

int CANSAME5x::endPacket() {
  if (!CANControllerClass::endPacket()) {
    return 0;
  }

  // TODO wait for TX buffer to free

  _canSAME5x_tx_buf &buf = state->tx_buffer[0];
  buf.txb0.bit.ESI = false;
  buf.txb0.bit.XTD = _txExtended;
  buf.txb0.bit.RTR = _txRtr;
  if (_txExtended) {
    buf.txb0.bit.ID = _txId;
  } else {
    buf.txb0.bit.ID = _txId << 18;
  }
  buf.txb1.bit.MM = 0;
  buf.txb1.bit.EFC = 0;
  buf.txb1.bit.FDF = 0;
  buf.txb1.bit.BRS = 0;
  buf.txb1.bit.DLC = _txLength;

  if (!_txRtr) {
    memcpy(buf.data, _txData, _txLength);
  }

  // TX buffer add request
  hw->TXBAR.reg = 1;

  // wait 8ms (hard coded for now) for TX to occur
  for (int i = 0; i < 8000; i++) {
    if (hw->TXBTO.reg & 1) {
      return true;
    }
    yield();
  }

  return 1;
}

int CANSAME5x::_parsePacket() {
  if (!hw->RXF0S.bit.F0FL) {
    return 0;
  }

  int index = hw->RXF0S.bit.F0GI;
  auto &hw_message = state->rx_fifo[index];

  _rxExtended = hw_message.rxf0.bit.XTD;
  _rxRtr = hw_message.rxf0.bit.RTR;
  _rxDlc = hw_message.rxf1.bit.DLC;

  if (_rxExtended) {
    _rxId = hw_message.rxf0.bit.ID;
  } else {
    _rxId = hw_message.rxf0.bit.ID >> 18;
  }

  if (_rxRtr) {
    _rxLength = 0;
  } else {
    _rxLength = _rxDlc;
    memcpy(_rxData, hw_message.data, _rxLength);
  }

  _rxIndex = 0;

  hw->RXF0A.bit.F0AI = index;

  return _rxDlc;
}

int CANSAME5x::parsePacket() {
  cpu_irq_enter_critical();
  int result = _parsePacket();
  cpu_irq_leave_critical();
  return result;
}

void CANSAME5x::onReceive(void (*callback)(int)) {
  CANControllerClass::onReceive(callback);

  auto irq = _idx == 0 ? CAN0_IRQn : CAN1_IRQn;
  if (callback) {
    NVIC_EnableIRQ(irq);
  } else {
    NVIC_DisableIRQ(irq);
  }
}

void CANSAME5x::handleInterrupt() {
  uint32_t ir = hw->IR.reg;

  if (ir & CAN_IR_RF0N) {
    while (int i = parsePacket())
      _onReceive(i);
  }

  hw->IR.reg = ir;
}

int CANSAME5x::filter(int id, int mask) {
  // accept matching standard messages
  state->standard_rx_filter[0].SIDFE_0.bit.SFID1 = id;
  state->standard_rx_filter[0].SIDFE_0.bit.SFID2 = mask;
  state->standard_rx_filter[0].SIDFE_0.bit.SFEC = CAN_SIDFE_0_SFEC_STF0M_Val;
  state->standard_rx_filter[0].SIDFE_0.bit.SFT = CAN_SIDFE_0_SFT_CLASSIC_Val;

  // reject all extended messages
  state->extended_rx_filter[0].XIDFE_0.bit.EFID1 = 0; // ID
  state->extended_rx_filter[0].XIDFE_0.bit.EFEC = CAN_XIDFE_0_EFEC_REJECT_Val;
  state->extended_rx_filter[0].XIDFE_1.bit.EFID2 = 0; // mask
  state->extended_rx_filter[0].XIDFE_1.bit.EFT = CAN_XIDFE_1_EFT_CLASSIC_Val;
}

int CANSAME5x::filterExtended(long id, long mask) {
  // reject all standard messages
  state->standard_rx_filter[0].SIDFE_0.bit.SFID1 = 0;
  state->standard_rx_filter[0].SIDFE_0.bit.SFID2 = 0;
  state->standard_rx_filter[0].SIDFE_0.bit.SFEC = CAN_SIDFE_0_SFEC_REJECT_Val;
  state->standard_rx_filter[0].SIDFE_0.bit.SFT = CAN_SIDFE_0_SFT_CLASSIC_Val;

  // reject all extended messages
  state->extended_rx_filter[0].XIDFE_0.bit.EFID1 = id;
  state->extended_rx_filter[0].XIDFE_0.bit.EFEC = CAN_XIDFE_0_EFEC_STF0M_Val;
  state->extended_rx_filter[0].XIDFE_1.bit.EFID2 = mask;
  state->extended_rx_filter[0].XIDFE_1.bit.EFT = CAN_XIDFE_1_EFT_CLASSIC_Val;
}

int CANSAME5x::observe() {
  hw->CCCR.bit.INIT = 1;
  while (!hw->CCCR.bit.INIT) {
  }
  hw->CCCR.bit.CCE = 1;

  hw->CCCR.bit.MON = 1;

  hw->CCCR.bit.CCE = 0;
  hw->CCCR.bit.INIT = 0;
  while (hw->CCCR.bit.INIT) {
  }
  return 1;
}

int CANSAME5x::loopback() {
  hw->CCCR.bit.INIT = 1;
  Serial.println("loopback start");
  while (!hw->CCCR.bit.INIT) {
  }
  hw->CCCR.bit.CCE = 1;

  hw->CCCR.bit.TEST = 1;
  hw->TEST.bit.LBCK = 1;
  Serial.println("loopback b");

  hw->CCCR.bit.CCE = 0;
  hw->CCCR.bit.INIT = 0;
  Serial.println("loopback c");
  while (hw->CCCR.bit.INIT) {
  }
  Serial.println("loopback d");
  return 1;
}

int CANSAME5x::sleep() {
  hw->CCCR.bit.CSR = 1;
  while (!hw->CCCR.bit.CSA) {
  }
  if (_idx == 0) {
    GCLK->PCHCTRL[CAN0_GCLK_ID].reg = 0;
  } else {
    GCLK->PCHCTRL[CAN1_GCLK_ID].reg = 0;
  }
  return 1;
}

int CANSAME5x::wakeup() {
  if (_idx == 0) {
    GCLK->PCHCTRL[CAN0_GCLK_ID].reg = GCLK_CAN0 | (1 << GCLK_PCHCTRL_CHEN_Pos);
  } else {
    GCLK->PCHCTRL[CAN1_GCLK_ID].reg = GCLK_CAN1 | (1 << GCLK_PCHCTRL_CHEN_Pos);
  }
  hw->CCCR.bit.INIT = 0;
  while (hw->CCCR.bit.INIT) {
  }
  return 1;
}
void CANSAME5x::onInterrupt() {
  for (int i = 0; i < size(instances); i++) {
    CANSAME5x *instance = instances[i];
    if (instance) {
      instance->handleInterrupt();
    }
  }
}

extern "C" __attribute__((externally_visible)) void CAN0_Handler() {
  cpu_irq_enter_critical();
  CANSAME5x::onInterrupt();
  cpu_irq_leave_critical();
}

extern "C" __attribute__((externally_visible)) void CAN1_Handler() {
  cpu_irq_enter_critical();
  CANSAME5x::onInterrupt();
  cpu_irq_leave_critical();
}

CANSAME5x *CANSAME5x::instances[2];

CANSAME5x CAN;

#endif
