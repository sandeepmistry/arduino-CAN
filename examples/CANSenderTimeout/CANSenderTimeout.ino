// Copyright (c) Sandeep Mistry. All rights reserved.
// Licensed under the MIT license. See LICENSE file in the project root for full license information.

#include <CAN.h>

void setup() {
  Serial.begin(9600);
  while (!Serial);

  Serial.println("CAN Sender");

  // start the CAN bus at 500 kbps
  if (!CAN.begin(500E3)) {
    Serial.println("Starting CAN failed!");
    while (1);
  }
}

void loop() {
  int error_code = 0;
  int count = 0;
  
  // send packet: id is 11 bits, packet can contain up to 8 bytes of data
  Serial.print("Sending packet ... ");

  CAN.beginPacket(0x12);
  CAN.write('h');
  CAN.write('e');
  CAN.write('l');
  CAN.write('l');
  CAN.write('o');
  
  while (true)
  {
    error_code = CAN.endPacket();

    Serial.println(error_code);

    if (error_code == 1)
    {
      Serial.print("Transmission complete!");
      break;
    }

    if(count > 5)
    {
      Serial.print("timeout!");
      CAN.sleep();
      delay(50);
      CAN.wakeup();
      break;
    }
    count++;
    delay(50);
  }
  
  Serial.println("done");

  delay(1000);
}
