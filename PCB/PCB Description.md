## PCB Design
Considering the design specifications of a 9x9 matrix, it seemed that integration of the Rotary Encoder into the matrix would be efficient, saving space while keeping the functionality, and making certain the amount of pins required would not exeed that of the XIAO RP-2040.

![Schematic Print](../Assets/Schematic%20Print-1.png)

To retain the ability to add animations to the RGB LEDs later through a simple firmware update, It was also decided to use 8 SK6812E MINIs, under each key (apart from the encoder). The OLED was put towards the top of the 