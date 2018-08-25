#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>
#include "shiftout.h"

int main(void)
{

    shiftOut_begin();

    while (1) {
            _delay_ms(100);
        shiftOut_send(0xF0);
    }

}
