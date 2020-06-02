### This section deals with sending data from Arduino UNO to ESP8266.
# Components Required :
## Arduino UNO 
<img src="https://github.com/Godson-Thomas/Data-transfer-between-Arduino-UNO-and-ESP8266/blob/master/UNO_to_ESP8266/Images/A.jpeg" width="200">  <br>
## ESP8266 Module
<img src="https://github.com/Godson-Thomas/Data-transfer-between-Arduino-UNO-and-ESP8266/blob/master/UNO_to_ESP8266/Images/N.jpeg" width="200">  <br>
<img src="https://github.com/Godson-Thomas/Data-transfer-between-Arduino-UNO-and-ESP8266/blob/master/UNO_to_ESP8266/Images/P.png" width="400">  <br>
## Jumper Wires
<img src="https://github.com/Godson-Thomas/Data-transfer-between-Arduino-UNO-and-ESP8266/blob/master/UNO_to_ESP8266/Images/J.jpeg" width="200">  <br>
# Steps :
1. Install Arduino IDE. [link here](https://www.arduino.cc/en/main/software)<br>
2. Now we have to Install ESP8266 Board.<br>
* Copy<br> `https://arduino.esp8266.com/stable/package_esp8266com_index.json`<br>
* **File** >> **Preferences** >> Paste the Url into the *Additional Board Manager URLs*<br>
<img src="https://github.com/Godson-Thomas/Data-transfer-between-Arduino-UNO-and-ESP8266/blob/master/UNO_to_ESP8266/Images/B.png" width="400"> <br>
<img src="https://github.com/Godson-Thomas/Data-transfer-between-Arduino-UNO-and-ESP8266/blob/master/UNO_to_ESP8266/Images/B3.png" width="400"> <br>
3. Go to **Tools** >> **Board** >>**Boards Manager** <br>
<img src="https://github.com/Godson-Thomas/Data-transfer-between-Arduino-UNO-and-ESP8266/blob/master/UNO_to_ESP8266/Images/B6.png" width="400"> <br>
4. Type **esp8266** in the search bar and Install it.<br>
<img src="https://github.com/Godson-Thomas/Data-transfer-between-Arduino-UNO-and-ESP8266/blob/master/UNO_to_ESP8266/Images/B7.png" width="600"> <br>
5. Connect Arduino and upload the Code [Arduino.ino](https://github.com/Godson-Thomas/Data-transfer-between-Arduino-UNO-and-ESP8266/blob/master/UNO_to_ESP8266/Arduino.ino) with your data in the code.<br>

6. Connect ESP8266 and upload the Code [ESP8266.ino](https://github.com/Godson-Thomas/Data-transfer-between-Arduino-UNO-and-ESP8266/blob/master/UNO_to_ESP8266/ESP8266.ino) for receving data by selecting **Tools** >> **Board** >> **NodeMCU**.<br>
<img src="https://github.com/Godson-Thomas/Data-transfer-between-Arduino-UNO-and-ESP8266/blob/master/UNO_to_ESP8266/Images/B8.png" width="400"> <br>
7. ### Note :Refer the ports of Rx/Tx pins and connect **Rx//Tx** of Arduino to **Tx//Rx**  of ESP8266.(Both pins are included here for senting data between the boards)<br>
<img src="https://github.com/Godson-Thomas/Data-transfer-between-Arduino-UNO-and-ESP8266/blob/master/UNO_to_ESP8266/Images/C.jpg" width="400"> <br>
8. Open the Serial Monitor in the NodeMCU board.Received data will be displayed.
