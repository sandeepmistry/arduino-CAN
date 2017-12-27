// Copyright (c) Sandeep Mistry. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#include "CAN.h"

#define REG_BFPCTRL                0x0c
#define REG_TXRTSCTRL              0x0d

#define REG_CANCTRL                0x0f

#define REG_CNF3                   0x28
#define REG_CNF2                   0x29
#define REG_CNF1                   0x2a

#define REG_CANINTE                0x2b
#define REG_CANINTF                0x2c

#define FLAG_RXnIE(n)              (0x01 << n)
#define FLAG_RXnIF(n)              (0x01 << n)
#define FLAG_TXnIF(n)              (0x04 << n)

#define REG_TXBnCTRL(n)            (0x30 + (n * 0x10))
#define REG_TXBnSIDH(n)            (0x31 + (n * 0x10))
#define REG_TXBnSIDL(n)            (0x32 + (n * 0x10))
#define REG_TXBnEID8(n)            (0x33 + (n * 0x10))
#define REG_TXBnEID0(n)            (0x34 + (n * 0x10))
#define REG_TXBnDLC(n)             (0x35 + (n * 0x10))
#define REG_TXBnD0(n)              (0x36 + (n * 0x10))

#define REG_RXBnCTRL(n)            (0x60 + (n * 0x10))
#define REG_RXBnSIDH(n)            (0x61 + (n * 0x10))
#define REG_RXBnSIDL(n)            (0x62 + (n * 0x10))
#define REG_RXBnEID8(n)            (0x63 + (n * 0x10))
#define REG_RXBnEID0(n)            (0x64 + (n * 0x10))
#define REG_RXBnDLC(n)             (0x65 + (n * 0x10))
#define REG_RXBnD0(n)              (0x66 + (n * 0x10))

#define FLAG_IDE                   0x08
#define FLAG_SRR                   0x10
#define FLAG_RTR                   0x40
#define FLAG_EXIDE                 0x08

#define FLAG_RXM0                  0x20
#define FLAG_RXM1                  0x40

#define REG_RXB0CTRL               0x60
#define REG_RXB1CTRL               0x70

CANClass::CANClass() :
  _spiSettings(10E6, MSBFIRST, SPI_MODE0),
  _ss(CAN_DEFAULT_SS_PIN),
  _irq(CAN_DEFAULT_INT_PIN),
  _onReceive(NULL),

  _packetBegun(false),
  _txId(-1),
  _txExtended(-1),
  _txRtr(false),
  _txDlc(0),
  _txLength(0),

  _rxId(-1),
  _rxExtended(false),
  _rxRtr(false),
  _rxDlc(0),
  _rxLength(0),
  _rxIndex(0)
{
  // overide Stream timeout value
  setTimeout(0);
}

int CANClass::begin(long baudRate, long clockRate)
{
  _packetBegun = false;
  _txId = -1;
  _txRtr =false;
  _txDlc = 0;
  _txLength = 0;

  _rxId = -1;
  _rxRtr = false;
  _rxDlc = 0;
  _rxLength = 0;
  _rxIndex = 0;

  pinMode(_ss, OUTPUT);
  digitalWrite(_ss, HIGH);

  // start SPI
  SPI.begin();

  reset();

  writeRegister(REG_CANCTRL, 0x80);
  if (readRegister(REG_CANCTRL) != 0x80) {
    return 0;
  }

  const struct {
    long clockRate;
    long baudRate;
    uint8_t cfg[3];
  } CFG_MAPPER[] = {
    {  (long)8E6, (long)1000E3, { 0x00, 0xc0, 0x80 } },
    {  (long)8E6,  (long)500E3, { 0x00, 0xd1, 0x81 } },
    {  (long)8E6,  (long)250E3, { 0x80, 0xe5, 0x83 } },
    {  (long)8E6,  (long)200E3, { 0x80, 0xf6, 0x84 } },
    {  (long)8E6,  (long)125E3, { 0x81, 0xe5, 0x83 } },
    {  (long)8E6,  (long)100E3, { 0x81, 0xf6, 0x84 } },
    {  (long)8E6,   (long)80E3, { 0x84, 0xd3, 0x81 } },
    {  (long)8E6,   (long)50E3, { 0x84, 0xe5, 0x83 } },
    {  (long)8E6,   (long)40E3, { 0x84, 0xf6, 0x84 } },
    {  (long)8E6,   (long)20E3, { 0x89, 0xf6, 0x84 } },
    {  (long)8E6,   (long)10E3, { 0x93, 0xf6, 0x84 } },
    {  (long)8E6,    (long)5E3, { 0xa7, 0xf6, 0x84 } },
    { (long)16E6, (long)1000E3, { 0x00, 0xca, 0x81 } },
    { (long)16E6,  (long)500E3, { 0x40, 0xe5, 0x83 } },
    { (long)16E6,  (long)250E3, { 0x41, 0xe5, 0x83 } },
    { (long)16E6,  (long)200E3, { 0x41, 0xf6, 0x84 } },
    { (long)16E6,  (long)125E3, { 0x43, 0xe5, 0x83 } },
    { (long)16E6,  (long)100E3, { 0x44, 0xe5, 0x83 } },
    { (long)16E6,   (long)80E3, { 0x44, 0xf6, 0x84 } },
    { (long)16E6,   (long)50E3, { 0x47, 0xf6, 0x84 } },
    { (long)16E6,   (long)40E3, { 0x49, 0xf6, 0x84 } },
    { (long)16E6,   (long)20E3, { 0x53, 0xe5, 0x84 } },
    { (long)16E6,   (long)10E3, { 0x67, 0xf6, 0x84 } },
    { (long)16E6,    (long)5E3, { 0x3f, 0xff, 0x87 } },
    { (long)20E6, (long)1000E3, { 0x00, 0xd9, 0x82 } },
    { (long)20E6,  (long)500E3, { 0x40, 0xe5, 0x83 } },
    { (long)20E6,  (long)250E3, { 0x41, 0xf6, 0x84 } },
    { (long)20E6,  (long)200E3, { 0x44, 0xd3, 0x81 } },
    { (long)20E6,  (long)125E3, { 0x44, 0xe5, 0x83 } },
    { (long)20E6,  (long)100E3, { 0x44, 0xf6, 0x84 } },
    { (long)20E6,   (long)80E3, { 0xc4, 0xff, 0x87 } },
    { (long)20E6,   (long)50E3, { 0x49, 0xf6, 0x84 } },
    { (long)20E6,   (long)40E3, { 0x18, 0xd3, 0x81 } },
  };

  const uint8_t* cfg = NULL;

  for (unsigned int i = 0; i < (sizeof(CFG_MAPPER) / sizeof(CFG_MAPPER[0])); i++) {
    if (CFG_MAPPER[i].clockRate == clockRate && CFG_MAPPER[i].baudRate == baudRate) {
      cfg = CFG_MAPPER[i].cfg;
      break;
    }
  }

  if (cfg == NULL) {
    return 0;
  }

  writeRegister(REG_CNF1, cfg[0]);
  writeRegister(REG_CNF2, cfg[1]);
  writeRegister(REG_CNF3, cfg[2]);

  writeRegister(REG_CANINTE, FLAG_RXnIE(1) | FLAG_RXnIE(0));
  writeRegister(REG_BFPCTRL, 0x00);
  writeRegister(REG_TXRTSCTRL, 0x00);
  writeRegister(REG_RXB0CTRL, FLAG_RXM1 | FLAG_RXM0);
  writeRegister(REG_RXB1CTRL, FLAG_RXM1 | FLAG_RXM0);

  writeRegister(REG_CANCTRL, 0x00);
  if (readRegister(REG_CANCTRL) != 0x00) {
    return 0;
  }

  return 1;
}

void CANClass::end()
{
  SPI.end();
}

int CANClass::beginPacket(int id, int dlc, bool rtr)
{
  if (id < 0 || id > 0x7FF) {
    return 0;
  }

  if (dlc > 8) {
    return 0;
  }

  _packetBegun = true;
  _txId = id;
  _txExtended = false;
  _txRtr = rtr;
  _txDlc = dlc;
  _txLength = 0;

  memset(_txData, 0x00, sizeof(_txData));

  return 1;
}

int CANClass::beginExtendedPacket(long id, int dlc, bool rtr)
{
  if (id < 0 || id > 0x1FFFFFFF) {
    return 0;
  }

  if (dlc > 8) {
    return 0;
  }

  _packetBegun = true;
  _txId = id;
  _txExtended = true;
  _txRtr = rtr;
  _txDlc = dlc;
  _txLength = 0;

  memset(_txData, 0x00, sizeof(_txData));

  return 1;
}

int CANClass::endPacket()
{
  if (!_packetBegun) {
    return 0;
  }
  _packetBegun = false;

  if (_txDlc >= 0) {
    _txLength = _txDlc;
  }

  int n = 0;

  if (_txExtended) {
    writeRegister(REG_TXBnSIDH(n), _txId >> 21);
    writeRegister(REG_TXBnSIDL(n), (((_txId >> 18) & 0x03) << 5) | FLAG_EXIDE | ((_txId >> 16) & 0x03));
    writeRegister(REG_TXBnEID8(n), (_txId >> 8) & 0xff);
    writeRegister(REG_TXBnEID0(n), _txId & 0xff);
  } else {
    writeRegister(REG_TXBnSIDH(n), _txId >> 3);
    writeRegister(REG_TXBnSIDL(n), _txId << 5);
    writeRegister(REG_TXBnEID8(n), 0x00);
    writeRegister(REG_TXBnEID0(n), 0x00);
  }

  if (_txRtr) {
    writeRegister(REG_TXBnDLC(n), 0x40 | _txLength);
  } else {
    writeRegister(REG_TXBnDLC(n), _txLength);

    for (int i = 0; i < _txLength; i++) {
      writeRegister(REG_TXBnD0(n) + i, _txData[i]);
    }
  }

  writeRegister(REG_TXBnCTRL(n), 0x08);

  while (readRegister(REG_TXBnCTRL(n)) & 0x08) {
    if (readRegister(REG_TXBnCTRL(n)) & 0x10) {
      // abort
      modifyRegister(REG_CANCTRL, 0x10, 0x10);
    }

    yield();
  }

  modifyRegister(REG_CANINTF, FLAG_TXnIF(n), 0x00);

  return (readRegister(REG_TXBnCTRL(n)) & 0x70) ? 0 : 1;
}

int CANClass::parsePacket()
{
  int n;

  uint8_t intf = readRegister(REG_CANINTF);

  if (intf & FLAG_RXnIF(0)) {
    n = 0;
  } else if (intf & FLAG_RXnIF(1)) {
    n = 1;
  } else {
    _rxId = -1;
    _rxExtended = false;
    _rxRtr = false;
    _rxLength = 0;
    return 0;
  }

  _rxExtended = (readRegister(REG_RXBnSIDL(n)) & FLAG_IDE) ? true : false;

  uint32_t idA = (readRegister(REG_RXBnSIDH(n)) << 3) | ((readRegister(REG_RXBnSIDL(n)) >> 5) & 0x07);
  if (_rxExtended) {
    uint32_t idB = ((uint32_t)(readRegister(REG_RXBnSIDL(n)) & 0x03) << 16) | (readRegister(REG_RXBnEID8(n)) << 8) | readRegister(REG_RXBnEID0(n));

    _rxId = (idA << 18) | idB;
    _rxRtr = (readRegister(REG_RXBnDLC(n)) & FLAG_RTR) ? true : false;
  } else {
    _rxId = idA;
    _rxRtr = (readRegister(REG_RXBnSIDL(n)) & FLAG_SRR) ? true : false;
  }
  _rxDlc = readRegister(REG_RXBnDLC(n)) & 0x0f;
  _rxIndex = 0;

  if (_rxRtr) {
    _rxLength = 0;
  } else {
    _rxLength = _rxDlc;

    for (int i = 0; i < _rxLength; i++) {
      _rxData[i] = readRegister(REG_RXBnD0(n) + i);
    }
  }

  modifyRegister(REG_CANINTF, FLAG_RXnIF(n), 0x00);

  return _rxDlc;
}

long CANClass::packetId()
{
  return _rxId;
}

bool CANClass::packetExtended()
{
  return _rxExtended;
}

bool CANClass::packetRtr()
{
  return _rxRtr;
}

int CANClass::packetDlc()
{
  return _rxDlc;
}

size_t CANClass::write(uint8_t byte)
{
  return write(&byte, sizeof(byte));
}

size_t CANClass::write(const uint8_t *buffer, size_t size)
{
  if (!_packetBegun) {
    return 0;
  }

  if (size > (sizeof(_txData) - _txLength)) {
    size = sizeof(_txData) - _txLength;
  }

  memcpy(&_txData[_txLength], buffer, size);
  _txLength += size;

  return size;
}

int CANClass::available()
{
  return (_rxLength - _rxIndex);
}

int CANClass::read()
{
  if (!available()) {
    return -1;
  }

  return _rxData[_rxIndex++];
}

int CANClass::peek()
{
  if (!available()) {
    return -1;
  }

  return _rxData[_rxIndex];
}

void CANClass::flush()
{
}

void CANClass::onReceive(void(*callback)(int))
{
  _onReceive = callback;

  pinMode(_irq, INPUT);

  if (callback) {
    SPI.usingInterrupt(digitalPinToInterrupt(_irq));
    attachInterrupt(digitalPinToInterrupt(_irq), CANClass::onInterrupt, LOW);
  } else {
    detachInterrupt(digitalPinToInterrupt(_irq));
#ifdef SPI_HAS_NOTUSINGINTERRUPT
    SPI.notUsingInterrupt(digitalPinToInterrupt(_irq));
#endif
  }
}

int CANClass::loopback()
{
  writeRegister(REG_CANCTRL, 0x40);
  if (readRegister(REG_CANCTRL) != 0x40) {
    return 0;
  }

  return 1;
}

int CANClass::sleep()
{
  writeRegister(REG_CANCTRL, 0x01);
  if (readRegister(REG_CANCTRL) != 0x01) {
    return 0;
  }

  return 1;
}

int CANClass::wakeup()
{
  writeRegister(REG_CANCTRL, 0x00);
  if (readRegister(REG_CANCTRL) != 0x00) {
    return 0;
  }

  return 1;
}

void CANClass::setPins(int ss, int irq)
{
  _ss = ss;
  _irq = irq;
}

void CANClass::setSPIFrequency(uint32_t frequency)
{
  _spiSettings = SPISettings(frequency, MSBFIRST, SPI_MODE0);
}

void CANClass::dumpRegisters(Stream& out)
{
  for (int i = 0; i < 128; i++) {
    byte b = readRegister(i);

    out.print("0x");
    if (i < 16) {
      out.print('0');
    }
    out.print(i, HEX);
    out.print(": 0x");
    if (b < 16) {
      out.print('0');
    }
    out.println(b, HEX);
  }
}

void CANClass::reset()
{
  digitalWrite(_ss, LOW);

  SPI.beginTransaction(_spiSettings);
  SPI.transfer(0xc0);
  SPI.endTransaction();

  digitalWrite(_ss, HIGH);

  delayMicroseconds(10);
}

void CANClass::handleInterrupt()
{
  if (readRegister(REG_CANINTF) == 0) {
    return;
  }

  while (parsePacket()) {
    _onReceive(available());
  }
}

uint8_t CANClass::readRegister(uint8_t address)
{
  uint8_t value;

  digitalWrite(_ss, LOW);

  SPI.beginTransaction(_spiSettings);
  SPI.transfer(0x03);
  SPI.transfer(address);
  value = SPI.transfer(0x00);
  SPI.endTransaction();

  digitalWrite(_ss, HIGH);

  return value;
}

void CANClass::modifyRegister(uint8_t address, uint8_t mask, uint8_t value)
{
  digitalWrite(_ss, LOW);

  SPI.beginTransaction(_spiSettings);
  SPI.transfer(0x05);
  SPI.transfer(address);
  SPI.transfer(mask);
  SPI.transfer(value);
  SPI.endTransaction();

  digitalWrite(_ss, HIGH);
}

void CANClass::writeRegister(uint8_t address, uint8_t value)
{
  digitalWrite(_ss, LOW);

  SPI.beginTransaction(_spiSettings);
  SPI.transfer(0x02);
  SPI.transfer(address);
  SPI.transfer(value);
  SPI.endTransaction();

  digitalWrite(_ss, HIGH);
}

void CANClass::onInterrupt()
{
  CAN.handleInterrupt();
}

CANClass CAN;

