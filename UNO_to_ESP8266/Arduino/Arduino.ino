//Code
#include <SoftwareSerial.h>

SoftwareSerial toESP(0, 1); //Rx, Tx

void setup()
{

  toESP.begin(9600);
}

void loop()
{

  toESP.println("hello");
  delay(2000);
  }
