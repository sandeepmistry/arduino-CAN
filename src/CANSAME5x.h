// Copyright 2020 © Jeff Epler for Adafruit Industries. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full
// license information.

#include "CANController.h"

class CANSAME5x : public CANControllerClass {
public:
  CANSAME5x();
  CANSAME5x(uint8_t tx_pin, uint8_t rx_pin);
  ~CANSAME5x() final;

  int begin(long baudRate) final;
  void end() final;

  int endPacket() final;

  int parsePacket() final;

  void onReceive(void (*callback)(int)) final;

  using CANControllerClass::filter;
  int filter(int id, int mask) final;
  using CANControllerClass::filterExtended;
  int filterExtended(long id, long mask) final;

  int observe() final;
  int loopback() final;
  int sleep() final;
  int wakeup() final;

  void dumpRegisters(Stream &out);

private:
  void bus_autorecover();

  void handleInterrupt();

  int _parsePacket();

private:
  int8_t _tx, _rx;
  int8_t _idx;
  // intr_handle_t _intrHandle;
  void *_state;
  void *_hw;
  static CANSAME5x *instances[2];

  static void onInterrupt();

  friend void CAN0_Handler(void);
  friend void CAN1_Handler(void);
};

extern CANSAME5x CAN;
