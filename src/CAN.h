// Copyright (c) Sandeep Mistry. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#ifndef CAN_H
#define CAN_H

#include <Arduino.h>
#include <SPI.h>

#define CAN_DEFAULT_CLOCK_FREQUENCY 16e6
#define CAN_DEFAULT_SS_PIN          10
#define CAN_DEFAULT_INT_PIN         2

class CANClass : public Stream {

public:
  CANClass();

  int begin(long baudRate);
  void end();

  int beginPacket(int id, int dlc = -1, bool rtr = false);
  int beginExtendedPacket(long id, int dlc = -1, bool rtr = false);
  int endPacket();

  int parsePacket();
  long packetId();
  bool packetExtended();
  bool packetRtr();
  int packetDlc();

  // from Print
  virtual size_t write(uint8_t byte);
  virtual size_t write(const uint8_t *buffer, size_t size);

  // from Stream
  virtual int available();
  virtual int read();
  virtual int peek();
  virtual void flush();

  void onReceive(void(*callback)(int));

  int loopback();
  int sleep();
  int wakeup();

  void setPins(int ss = CAN_DEFAULT_SS_PIN, int irq = CAN_DEFAULT_INT_PIN);
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
  int _ss;
  int _irq;
  long _clockFrequency;
  void (*_onReceive)(int);

  bool _packetBegun;
  long _txId;
  bool _txExtended;
  bool _txRtr;
  int _txDlc;
  int _txLength;
  uint8_t _txData[8];

  long _rxId;
  bool _rxExtended;
  bool _rxRtr;
  int _rxDlc;
  int _rxLength;
  int _rxIndex;
  uint8_t _rxData[8];
};

extern CANClass CAN;

#endif
