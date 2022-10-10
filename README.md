# clicli

This Library provides a simple CLI management through the serial terminal

NOTES:
Initiates the Serial monitor at 115200 Baud rate
Does not work with btserial or other libraries that works with the Serial Terminal

OPERATION:
Just click h and pin number to set a pin. similarly you can reset, with l (for low)

              Feature                |  CLI Usage
___________________________________________________
 Digial Write HIGH to a specific pin |  h (pin)
 Digial Write LOW to a specific pin  |  l (pin)
 Analog Write to pwm ports           |  a (pin) (value)
 Digital Read                        |  r (pin)
 Analog Read                         |  e (pin) 

for example:
in the Serial Monitor, just click 
h 13

that shoud trigger the builtin led on (and set pin 13 to HIGH)
now try l 13.
this should turn it off.
a 3 200 will write the value 200 to pin 3 (PWM)
r 13
will read the value of a digital port
e 0
will read the value of the Analog input A0


You can add more functionalities and shortcuts by editing the .cpp and .h files
