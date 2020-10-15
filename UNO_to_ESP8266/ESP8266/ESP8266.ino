//Code
#include <SoftwareSerial.h>
SoftwareSerial fromUNO(D4, D5); //Rx, Tx

void setup()

{
  Serial.begin(9600);
  fromUNO.begin(9600);
}


void loop()
{
int i=1;
  while(i<=1)
  if (fromUNO.available())
  {
    char data = fromUNO.read();
    Serial.print(data);
  }
}
