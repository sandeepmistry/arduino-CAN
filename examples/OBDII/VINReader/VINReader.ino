#include <CAN.h>

// Most cars support 11-bit adddress, others (like Honda),
// require 29-bit (extended) addressing, set the next line
// to true to use extended addressing
const bool useStandardAddressing = true;

void setup() {
  Serial.begin(9600);

  Serial.println("CAN OBD-II VIN reader");

  // start the CAN bus at 500 kbps
  if (!CAN.begin(500E3)) {
    Serial.println("Starting CAN failed!");
    while (1);
  }

  if (useStandardAddressing) {
    CAN.filter(0x7e8);
  } else {
    CAN.filterExtended(0x18daf110);
  }
}

void loop() {
  // send the request for the first chunk
  if (useStandardAddressing) {
    CAN.beginPacket(0x7df, 8);
  } else {
    CAN.beginExtendedPacket(0x18db33f1, 8);
  }
  CAN.write(0x02); // Number of additional bytes
  CAN.write(0x09); // Request vehicle information
  CAN.write(0x02); // Vehicle Identification Number (VIN)
  CAN.endPacket();

  // wait for response
  while (CAN.parsePacket() == 0 ||
         CAN.read() != 0x10 || CAN.read() != 0x14 || // correct length
         CAN.read() != 0x49 ||                       // correct mode
         CAN.read() != 0x02 ||                       // correct PID
         CAN.read() != 0x01);

  // print out
  while (CAN.available()) {
    Serial.write((char)CAN.read());
  }

  // send the request for the remaining bytes
  if (useStandardAddressing) {
    CAN.beginPacket(0x7e0, 8);
  } else {
    CAN.beginExtendedPacket(0x18db10f1, 8); // TODO - verify this
  }
  CAN.write(0x30);
  CAN.endPacket();

  // read in remaining bytes
  for (int i = 0; i < 2; i++) {
    // wait for response
    while (CAN.parsePacket() == 0 ||                 // wait for response
           CAN.read() != 0x21);

    // print out
    while (CAN.available()) {
      Serial.write((char)CAN.read());
    }
  }

  while (1); // all done
}
