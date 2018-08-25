#include <avr/io.h>

#ifndef setBit
#define setBit(PORT, BIT) PORT |= (1<<BIT)
#endif

#ifndef clearBit
#define clearBit(PORT, BIT) PORT &= ~(1<<BIT)
#endif

#ifndef setOutput
#define setOutput(DDR, BIT) DDR |= (1<<BIT)
#endif

#ifndef setInput
#define setInput(DDR, BIT) DDR &= ~(1<<BIT)
#endif

//configure shiftout
#define DDR DDRD
#define PORT PORTD
#define SHIFTOUT_CLK 7 //clock pin
#define SHIFTOUT_CP  6 //RCLK pin. update output pins
#define SHIFTOUT_SI  5 //serial in

void shiftOut_begin();

void shiftOut_send(char byte);

#include "shiftout.c"