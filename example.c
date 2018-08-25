#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>
#include "shiftout.h"

int main(void)
{
    
    //initialize pins
    shiftOut_begin();

    while (1) {
        
        _delay_ms(100);
        //send 0xF0 to shift register Q0..Q7 -> 00001111
        shiftOut_send(0xF0);
    }

}
