# EE893 E2 with Arduino

## QUICK START GUIDE  

### Components 
- EE893
- Arduino
- Breadboard 
- Wire jumper cable <br>
<br>

### Librarys
Please note that the library e2Interface must be included (https://github.com/EplusE/e2_interface_arduino)

| Step |                                                                                                                                                             |
|------|-------------------------------------------------------------------------------------------------------------------------------------------------------------|
| 1    | Connect the EE893 sensor module with Arduino according to the following scheme: <br> __Compact:__ [<img src="images/EE893_comp_arduino.png" width="25%"/>](images/EE893_comp_arduino.png)|
| 2    | Download and install the Arduino IDE (https://www.arduino.cc/en/software). Version >1.8.7 recommended.                                                            |
| 3    | Download the ZIP File of this project.|
| 4    | Open the arduino software.|
| 5    | Go to: <br>[<img src="images/add_library.png" width="550"/>](images/add_library.png) |
| 6    | Search for the downloaded ZIP File and open it.|
| 7    | Go to:<br>[<img src="images/open_file.png" width="500"/>](images/open_file.png)|
| 8    | Connect the Arduino to your PC via the USB cable. Select Board “Arduino Uno” and the appropriate COM-Port from Tools menu and upload the sketch |
| 9    | When the upload is finished, open the the "Serial Monitor" with the key combination (Control + Shift + M) or via the menu bar: <br> [<img src="images/serial_Monitor.png" width="400"/>](images/serial_Monitor.png) |
<br>



### Change bus line pins (E2_SCL,E2_SDA) 
Changing the pins can be easily done as follows:<br>
*  Open the file "SerialOutput.ino".
*  In line 11 and 12 of this file SerialOutput, you can find SDA_pin and SCL_pin. 
*  Replace the GPIO pin numbers according to your requirements.
<br> 



<br>

## License 
See [LICENSE](LICENSE).