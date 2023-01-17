// Develop a working model to mark attendance using RFID 
// module and store data in cloud.
#include <HC05.h>
#include <SoftwareSerial.h>
#define LED 12
SoftwareSerial mySerial(0, 1);
int command = -1;  //Int to store app command state.



void setup() {
  pinMode(LED, OUTPUT);  //Set the LED pin.
  digitalWrite(LED, HIGH);
  mySerial.begin(38400);  //Set the baud rate to your Bluetooth module.
}


void loop() {
  if (mySerial.available() > 0) {
    command = mySerial.read();
    switch (command) {
      case '0':  // zero for LED off
        {
          digitalWrite(LED, LOW);
          delay(1000);
        }
        break;
      case '1':  // one for LED on
        {
          digitalWrite(LED, HIGH);
          delay(1000);
        }
        break;
    }  // switch
    command = -1;
  }
}
