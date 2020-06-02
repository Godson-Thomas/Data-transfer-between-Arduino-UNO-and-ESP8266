### This section deals with sending data from Arduino UNO to ESP8266.
# Components Required :
## Arduino UNO 
<img src="https://github.com/Godson-Thomas/GT511C3-Fingerprint-Sensor-Module/blob/master/GT-511C3/Images/f4.jpeg" width="200">  <br>
## ESP8266 Module
<img src="https://github.com/Godson-Thomas/GT511C3-Fingerprint-Sensor-Module/blob/master/GT-511C3/Images/f4.jpeg" width="200">  <br>
## Jumper Wires
<img src="https://github.com/Godson-Thomas/GT511C3-Fingerprint-Sensor-Module/blob/master/GT-511C3/Images/f4.jpeg" width="200">  <br>
# Steps :
1. Install Arduino IDE. [link here](https://www.arduino.cc/en/main/software)<br>
2. Now we have to Install ESP8266 Board.<br>
* Copy<br> `https://arduino.esp8266.com/stable/package_esp8266com_index.json`<br>
* **File** >> **Preferences** >> Paste the Url into the *Additional Board Manager URLs*<br>
<img src="https://github.com/Godson-Thomas/GT511C3-Fingerprint-Sensor-Module/blob/master/GT-511C3/Images/f4.jpeg" width="200"> <br>
3. Go to **Tools** >> **Board** >>**Boards Manager** <br>
<img src="https://github.com/Godson-Thomas/GT511C3-Fingerprint-Sensor-Module/blob/master/GT-511C3/Images/f4.jpeg" width="200"> <br>
4. Type **esp8266** in the search bar and Install it.<br>
<img src="https://github.com/Godson-Thomas/GT511C3-Fingerprint-Sensor-Module/blob/master/GT-511C3/Images/f4.jpeg" width="200"> <br>
5. Connect Arduino and upload the Code [Arduino.ino]() with your data in the code.<br>

6. Connect ESP8266 and upload the Code [ESP8266.ino]() for receving data by selecting **Tools** >> **Boards** >> **NodeMCU**.<br>
<img src="https://github.com/Godson-Thomas/GT511C3-Fingerprint-Sensor-Module/blob/master/GT-511C3/Images/f4.jpeg" width="200"> <br>
7. ### Note :Refer the ports of Rx/Tx pins and connect **Rx//Tx** of Arduino to **Tx//Rx**  of ESP8266.(Both pins are included here for senting data between the boards)<br>
<img src="https://github.com/Godson-Thomas/GT511C3-Fingerprint-Sensor-Module/blob/master/GT-511C3/Images/f4.jpeg" width="200"> <br>
8. Open the Serial Monitor in the NodeMCU board.Received data will be displayed.
