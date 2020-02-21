# Arduino-Pedelec-Controller
Software for the Pedelec/E-Bike controller based on Arduino hardware, see www.pedelecforum.de "ForumsController"
translated to english and converted to miles, math is still in km so change your wheel circumferance by 0.63 to compensate.

Pin Assignments 1.1-1.5 atmega 328
1.1
>A0	Analog option
A1	Voltage read-Pin
A2	Current read-Pin

1.2

>A0	FET: Pull high to switch off
A1	Voltage read-Pin
A2	Analog option
A3	Current read-Pin

1.3-1.5
>A0	Voltage read-Pin
A1	FET: Pull high to switch off
A2	Current read-Pin
A3	Analog option
A3	Software controlled lights switch

<= 1.5
>A6	PAS Speed-Poti-Pin
A7	Throttle read-Pin
D2	PAS Sensor read-Pin
D3	Speed read-Pin
D4	Brake-In-Pin
D5	Throttle-Switch read-Pin
D6	Throttle out-Pin
D7	Bluetooth-Supply, do not use in Rev. 1.1!!!
D8	Display switch
D12	second Display switch with Nokia-Display in 4-pin-mode

2.0 Atmega2560
>A14	Voltage read-Pin
D38	FET: Pull high to switch off
A15	Current read-Pin
A2	Analog option
44	Software controlled lights switch
A4	PAS Speed-Poti-Pin
A3	Throttle read-Pin
D3	PAS Sensor read-Pin
D2	Brake-In-Pin
D5	Throttle-Switch read-Pin
D8	Throttle out-Pin
D13	Bluetooth-Supply
D37	Display switch

2.2
>A13;           Negative Current read-Pin



## Documents
* [Breadboard configuration](docs/README_breadboard.md)
* [CMake](docs/README_cmake.txt)
* [Hacking](docs/README_hacking.txt)
* [Menu](docs/README_menu.txt)

## Code build status
[![Build Status](https://travis-ci.org/jenkie/Arduino-Pedelec-Controller.svg?branch=master)](https://travis-ci.org/jenkie/Arduino-Pedelec-Controller)
