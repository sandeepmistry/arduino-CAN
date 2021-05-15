// Copyright (c) Sandeep Mistry. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#ifndef ARDUINO_ARCH_ESP32

#ifndef MCP2515_H
#define MCP2515_H

#include <SPI.h>

#include "CANController.h"

#define MCP2515_DEFAULT_CLOCK_FREQUENCY 16e6

#if defined(ARDUINO_ARCH_SAMD) && defined(PIN_SPI_MISO) && defined(PIN_SPI_MOSI) && defined(PIN_SPI_SCK) && (PIN_SPI_MISO == 10) && (PIN_SPI_MOSI == 8) && (PIN_SPI_SCK == 9)
// Arduino MKR board: MKR CAN shield CS is pin 3, INT is pin 7
#define MCP2515_DEFAULT_CS_PIN          3
#define MCP2515_DEFAULT_INT_PIN         7
#else
#define MCP2515_DEFAULT_CS_PIN          10
#define MCP2515_DEFAULT_INT_PIN         2
#endif

class MCP2515Class : public CANControllerClass {

public:
  MCP2515Class();
  virtual ~MCP2515Class();

  virtual int begin(long baudRate);
  virtual void end();

  virtual int endPacket();

  virtual int parsePacket();

  virtual void onReceive(void(*callback)(int));

  using CANControllerClass::filter;
  virtual int filter(int id, int mask);

  // mask0 is applied to filter0 and filter1 for RXB0.
  // mask1 is applied to filter2, filter3, filter4, filter5 for RXB1.
  // allowRollover controls whether messages that would otherwise overflow RXB0
  //   should be put in RXB1 instead.
  //
  // See the MCP2515 datasheet for more info.
  boolean setFilterRegisters(
      uint16_t mask0, uint16_t filter0, uint16_t filter1,
      uint16_t mask1, uint16_t filter2, uint16_t filter3, uint16_t filter4, uint16_t filter5,
      bool allowRollover);

  using CANControllerClass::filterExtended;
  virtual int filterExtended(long id, long mask);
  // TODO: add setFilterRegistersExtended().

  virtual int observe();
  virtual int loopback();
  virtual int sleep();
  virtual int wakeup();

  void setPins(int cs = MCP2515_DEFAULT_CS_PIN, int irq = MCP2515_DEFAULT_INT_PIN);
  void setSPIFrequency(uint32_t frequency);
  void setClockFrequency(long clockFrequency);

  void dumpRegisters(Stream& out);

private:
  void reset();

  void handleInterrupt();

  uint8_t readRegister(uint8_t address);
  void modifyRegister(uint8_t address, uint8_t mask, uint8_t value);
  void writeRegister(uint8_t address, uint8_t value);

  static void onInterrupt();

private:
  SPISettings _spiSettings;
  int _csPin;
  int _intPin;
  long _clockFrequency;
};

extern MCP2515Class CAN;

#endif

#endif
