/*  How the code works and tips:

-When importing CAN.h it will automatically select which controller to be used depending on the board, (Internal SJA1000 for ESP, External MPU2515 for arduinos) 

-When a packet is received
    The library will setup a interrupt based function called onReceive, everytime a packet is received it will be processed
    by the controller (MPU2515 or SJA1000) outside the main program, where the package will be filtered, then, if the ID is 
    inside of what the filter allows (or there is no filter) it will call this function, where you can process your messages. 

-Filtering and masks are confusing.
    this might be helpful to understand it https://www.microchip.com/forums/m456043.aspx

Tips for better stability:
    1 - You should prefer using an interrupt based processing over loop-based to avoid buffer issues, Heavy or light bus errors.
        (When buffer issues happens you will receive the same message, or anything at all until reboot)

    2 - Filtering only the used ID's will massively reduce the amound of data to be processed.

    3 - On ESP32 its possible to run the CAN in the second processor, allowing the first to be used to heavy tasks (check FREERTOS guides)
*/

#include <Arduino.h> //only needed for VSCODE/Platformio
#include <CAN.h>

void onReceive(int packetSize)      //This will be called every time a new and filtered packet is received
{                                   //Only packages with the ID 0x12 will get here (defined by the filter)
 
  Serial.print("packet id 0x");
  Serial.print(CAN.packetId(), HEX);//For platformio you might need to add "monitor_flags = --raw" to platformio.ini (otherwise you will see garbage)
  Serial.print(" data: ");

  while (CAN.available())          //read and print all the bytes available in the package
  {
    Serial.print((char)CAN.read(), HEX);
    Serial.print(" ");
  }
  Serial.println("");
}

void setup()
{
  Serial.begin(115200);
  while (!Serial)
    ;                             //this will make sure the code wont start unless there is someone listening in the serial.  Use only for debugging
  if (!CAN.begin(500E3))          // try to start the CAN bus at 500 kbps
  {
    Serial.println("Starting CAN failed!");
    while (1)                     //if failed to start the program will hang
      ;
  }
  Serial.println("Can initialized");
  CAN.filter(0x12, 0x1FFFFFFF);   //initializa a CAN.filter(id, mask);
  CAN.onReceive(onReceive);       // register the receive callback
}

void loop()
{
  // No CAN related code needs to run inside the loop:
}