// Copyright (c) Sandeep Mistry. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#ifdef ARDUINO_ARCH_ESP32

#ifndef ESP32_SJA1000_H
#define ESP32_SJA1000_H

#include "CANController.h"

#define DEFAULT_CAN_RX_PIN GPIO_NUM_4
#define DEFAULT_CAN_TX_PIN GPIO_NUM_5

#define REG_BASE                   0x3ff6b000

#define REG_MOD                    0x00
#define REG_CMR                    0x01
#define REG_SR                     0x02
#define REG_IR                     0x03
#define REG_IER                    0x04

#define REG_BTR0                   0x06
#define REG_BTR1                   0x07
#define REG_OCR                    0x08

#define REG_ALC                    0x0b
#define REG_ECC                    0x0c
#define REG_EWLR                   0x0d
#define REG_RXERR                  0x0e
#define REG_TXERR                  0x0f
#define REG_SFF                    0x10
#define REG_EFF                    0x10
#define REG_ACRn(n)                (0x10 + n)
#define REG_AMRn(n)                (0x14 + n)

#define REG_CDR                    0x1F

class ESP32SJA1000Class : public CANControllerClass {

public:
  ESP32SJA1000Class();
  virtual ~ESP32SJA1000Class();

  virtual int begin(long baudRate);
  virtual void end();

  virtual int endPacket();

  virtual int parsePacket();

  virtual void onReceive(recieveCallback callback);

  using CANControllerClass::filter;
  virtual int filter(int id, int mask);
  using CANControllerClass::filterExtended;
  virtual int filterExtended(long id, long mask);

  virtual int observe();
  virtual int loopback();
  virtual int sleep();
  virtual int wakeup();

  void setPins(int rx, int tx);

  void dumpRegisters(Stream& out);

protected:
  void reset();

  void handleInterrupt();

  static void onInterrupt(void* arg);

  uint8_t readRegister(uint8_t address);
  void modifyRegister(uint8_t address, uint8_t mask, uint8_t value);
  void writeRegister(uint8_t address, uint8_t value);

protected:
  gpio_num_t _rxPin;
  gpio_num_t _txPin;
  bool _loopback;
  intr_handle_t _intrHandle;
};

extern ESP32SJA1000Class CAN;

#endif

#endif
