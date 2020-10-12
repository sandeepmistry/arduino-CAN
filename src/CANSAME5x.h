// Copyright 2020 © Jeff Epler for Adafruit Industries. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#include "CANController.h"

class CANSAME5x : public CANControllerClass {
public:
  CANSAME5x();
  CANSAME5x(uint8_t rx_pin, uint8_t tx_pin);
  ~CANSAME5x() final;

  int begin(long baudRate) final;
  void end() final;

  int endPacket() final;

  int parsePacket() final;

  void onReceive(void(*callback)(int)) final;

  using CANControllerClass::filter;
  int filter(int id, int mask) final;
  using CANControllerClass::filterExtended;
  int filterExtended(long id, long mask) final;

  int observe() final;
  int loopback() final;
  int sleep() final;
  int wakeup() final;

  void dumpRegisters(Stream& out);

private:
  void reset();

  void handleInterrupt();

  uint8_t readRegister(uint8_t address);
  void modifyRegister(uint8_t address, uint8_t mask, uint8_t value);
  void writeRegister(uint8_t address, uint8_t value);

  static void onInterrupt(void* arg);

private:
  int8_t _tx, _rx;
  // intr_handle_t _intrHandle;
  void *_state;
  void *_hw;
};
