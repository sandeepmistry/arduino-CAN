# CAN API

## Include Library

```arduino
#include <CAN.h>
```

## Setup

### Begin

Initialize the library with the specified bit rate.

```arduino
CAN.begin(bitrate);
CAN.begin(bitrate, clockRate);
```
 * `bitrate` - bit rate in bits per seconds (bps) (`1000E3`, `500E3`, `250E3`, `200E3`, `125E3`, `100E3`, `80E3`, `50E3`, `40E3`, `20E3`, `10E3`, `5E3`)
 * `clockRate` - (optional) clock rate of clock source (`8E6`, `16E6`, `20E6`) connected to MCP2515, defaults to `16 Mhz`

Returns `1` on success, `0` on failure.

### Set pins

Override the default `CS` and `INT` pins used by the library. **Must** be called before `CAN.begin(...)`.

```arduino
CAN.setPins(cs, irq);
```
 * `cs` - new chip select pin to use, defaults to `10`
 * `irq` - new INT pin to use, defaults to `2`.  **Must** be interrupt capable via [attachInterrupt(...)](https://www.arduino.cc/en/Reference/AttachInterrupt).

This call is optional and only needs to be used if you need to change the default pins used.

### Set SPI Frequency

Override the default SPI frequency of 10 MHz used by the library. **Must** be called before `CAN.begin(...)`.

```arduino
CAN.setSPIFrequency(frequency);
```
 * `frequency` - new SPI frequency to use, defaults to `10E6`

This call is optional and only needs to be used if you need to change the default SPI frequency used. Some logic level converters cannot support high speeds such as 10 MHz, so a lower SPI frequency can be selected with `CAN.setSPIFrequency(frequency)`.

### End

Stop the library

```arduino
CAN.end()
```

## Sending data

### Begin packet

Start the sequence of sending a packet.

```arduino
CAN.beginPacket(id);
CAN.beginPacket(id, dlc);
CAN.beginPacket(id, dlc, rtr);

CAN.beginExtendedPacket(id);
CAN.beginExtendedPacket(id, dlc);
CAN.beginExtendedPacket(id, dlc, rtr);
```

 * `id` - 11-bit id (standard packet) or 29-bit packet id (extended packet)
 * `dlc` - (optional) value of Data Length Code (DLC) field of packet, default is size of data written in packet
 * `rtr` - (optional) value of Remote Transmission Request (RTR) field of packet (`false` or `true`), defaults to `false`. RTR packets contain no data, the DLC field of the packet represents the requested length.

Returns `1` on success, `0` on failure.

### Writing

Write data to the packet. Each packet can contain up to 8 bytes.

```arduino
CAN.write(byte);

CAN.write(buffer, length);
```
* `byte` - single byte to write to packet

or

* `buffer` - data to write to packet
* `length` - size of data to write

Returns the number of bytes written.

**Note:** Other Arduino `Print` API's can also be used to write data into the packet

### End packet

End the sequence of sending a packet.

```arduino
CAN.endPacket()
```

Returns `1` on success, `0` on failure.

## Receiving data

### Parsing packet

Check if a packet has been received.

```arduino
int packetSize = CAN.parsePacket();
```

Returns the packet size in bytes or `0` if no packet was received. For RTR packets the size reflects the DLC field of the packet.

### Register callback

Register a callback function for when a packet is received.

```arduino
CAN.onReceive(onReceive);

void onReceive(int packetSize) {
 // ...
}
```

 * `onReceive` - function to call when a packet is received.

### Packet ID

```arduino
long id = CAN.packetId();
```

Returns the id (11-bit or 29 bit) of the received packet. Standard packets have an 11-bit id, extended packets have an 29-bit id.

### Packet Extended

```arduino
bool extended = CAN.packetExtended();
```

Returns `true` if the received packet is extended, `false` otherwise.

### Packet RTR

```arduino
bool rtr = CAN.packetRtr();
```

Returns the value of the Remote Transmission Request (RTR) field of the packet `true`/`false`. RTR packets contain no data, the DLC field is the requested data length.

### Packet DLC

```arduino
int DLC = CAN.packetDlc();
```

Returns the value of the Data Length Code (DLC) field of the packet.


### Available

```arduino
int availableBytes = CAN.available()
```

Returns number of bytes available for reading.

### Peeking

Peek at the next byte in the packet.

```arduino
int b = CAN.peek();
```

Returns the next byte in the packet or `-1` if no bytes are available.

### Reading

Read the next byte from the packet.

```arduino
int b = CAN.read();
```

Returns the next byte in the packet or `-1` if no bytes are available.

**Note:** Other Arduino [`Stream` API's](https://www.arduino.cc/en/Reference/Stream) can also be used to read data from the packet

## Other modes

### Loopback mode

Put the CAN controller in loopback mode, any outgoing packets will also be received.

```arduino
CAN.loopback();
```

### Sleep mode

Put the CAN contoller in sleep mode.

```arduino
CAN.sleep();
```

Wake up the CAN contoller if it was previously in sleep mode.

```arduino
CAN.wakeup();
```
