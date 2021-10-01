# Can filtering and interrupt based processing

## Filter and mask setup.
this might be helpful to understand how filters and masks works https://www.microchip.com/forums/m456043.aspx
```arduino
  CAN.filter(0x12, 0x1FFFFFFF);   //initializa a CAN.filter(id, mask);
```


## Interrupt setup
```arduino
  CAN.onReceive(onReceive);       // register the receive callback
```


## How the code works and tips:

- When importing CAN.h it will automatically select which controller to be used depending on the board, (Internal SJA1000 for ESP, External MPU2515 for arduino's) 

- When a packet is received The library will setup a interrupt based function called onReceive, everytime a packet is received it will be processed by the controller (MPU2515 or SJA1000) outside the main program, where the package will be filtered, then, if the ID is 
inside of what the filter allows (or there is no filter) it will call this function, where you can process your messages. 

### Tips for better stability:
- You should prefer using an interrupt based processing over loop-based to avoid buffer issues, Heavy or light bus errors.
(When buffer issues happens you will receive the same message, or anything at all until reboot)

- Filtering only the used ID's will massively reduce the amound of data to be processed.

- On ESP32 its possible to run the CAN in the second processor, allowing the first to be used to heavy tasks (check FREERTOS guides)