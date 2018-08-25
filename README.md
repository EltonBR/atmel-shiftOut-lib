# atmel-shiftOut-lib
simple lib to use shiftout 74hc595 on atmel microcontrollers

to use, need change data diretion register (DDR) and port and pins in define directives on file shiftout.h  


```C
//configure shiftout
#define DDR DDRD
#define PORT PORTD
#define SHIFTOUT_CLK 7 //clock pin
#define SHIFTOUT_CP  6 //RCLK pin. update output pins
#define SHIFTOUT_SI  5 //serial in
```
view example in example.c file
