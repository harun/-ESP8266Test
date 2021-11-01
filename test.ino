
#include <SoftwareSerial.h>

#define MYPORT_TX 15 //D8 TXD2 GP15  15 Black
#define MYPORT_RX 13 //D7 RXD2 GP13  13 White

SoftwareSerial myPort;

void setup() {
  Serial.begin(9600); // Standard hardware serial port
  delay(100);
  myPort.begin(115200, SWSERIAL_8N1, MYPORT_RX, MYPORT_TX, false);
  
}

void loop() {
  if (!myPort) { // If the object did not initialize, then its configuration is invalid
    Serial.println("Invalid SoftwareSerial pin configuration, check config");
    while (1) { // Don't continue with invalid configuration
      delay (1000);
    }
  }
}
