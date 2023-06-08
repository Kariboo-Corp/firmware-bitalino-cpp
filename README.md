# BITalino Firmware | Modified Version
[Original Source Code](https://github.com/BITalinoWorld/firmware-bitalino)


The BITalino firmware is available in source code and in a prebuilt image ready to be programmed in a device.

**Modified Version**

This version was ported in C++, to allow the usage of some general purpose arduino libs. It also features an Assets class wich provide a debugger/logger for developement users.

## Programming the firmware

To program the firmware on the BITalino device, you will need an AVR ISP programmer like the Atmel AVRISP mkII. The 6-pin ISP interface shall be connected to BITalino using the following pin mapping:

ISP pin | BITalino pin
--------|-------------
  MISO  |    O3
  VCC   |    AVCC
  SCK   |    O4
  MOSI  |    O2
  RESET |    RST
  GND   |    AGND

### Programming

- PlatformIO along VS Code must be installed;
- connect the ISP programmer to your computer and wait for its drivers to be installed (first time only);
- connect the programmer to the BITalino device;
- click on the Program button (right arrow at bot of your screen) and check if the operation succeeded.

## Compiling the firmware

You may want to compile the firmware from the source code instead of using the provided firmware image. The firmware source code is written in C. You can use and modify the firmware source code under the terms of the firmware licence (GPL).

### Compiling

- PlatformIO along VS Code must be installed;
- connect the ISP programmer to your computer and wait for its drivers to be installed (first time only);
- connect the programmer to the BITalino device;
- click on the Compile button (right arrow at bot of your screen) and check if the operation succeeded.

## Debugging the firmware
You may want to debug the firmware when you add new features. To enable debug you should change the `is_debug` flag to `1` in `Assets.hpp`.
The `debugger` is `extern` wich means it could be called from anywhere. The `log` method is working like `printf`, string format are the same. 

You may use an FTDI serial to USB converter. Connect pins I2 (GPIO PD6) to TXD on the FTDI and I3 (GPIO PD7) to RXD (FTDI). Don't forget to connect GND to GND.

**Note : Hardwarely, while debugger is going on, status LED are disabled.**

### Debugging on Windows
The easiest way here is to download Arduino IDE and open the serial port of your debugger.

### Debugging on Linux
You should install minicom (`sudo apt install minicom`), and run it on the serial port : `minicom -D /dev/ttyUSB0 115200`.
If you get permissions error : `sudo usermod -aG dialout $USER && su $USER`

### Debugging on Mac OS
You should install minicom (`brew install minicom`), and run it on the serial port : `minicom -D /dev/ttyUSB0 115200`.
If you get permissions error : `sudo usermod -aG dialout $USER && su $USER`