#ifndef COMMON_H
#define COMMON_H

#define F_CPU 1000000UL

#include <util/delay.h>
#include <stdint.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdio.h>
#include <stdlib.h>

/*definitions common to all modules
 */

extern uint8_t ref_hum; //humidity at which to start drying
#define ref_hum_var 3   //stop drying at ref_hum-3
enum statev
{
    off,
    ok,
    waterfull
};
extern enum statev state;

//Bit operations
#define setbit(byte, bit) ((byte) |= ((1) << (bit)))
#define clearbit(byte, bit) ((byte) &= ~((1) << (bit)))
#define togglebit(byte, bit) ((byte) ^= ((1) << (bit)))
#define testbit(byte, bit) (((byte) >> (bit)) & (1))    //returns 1 or 0

//IC4.SCL:
#define PORT_IOSCL  PORTD
#define PIOSCL      PD3
#define DDR_IOSCL   DDRD
#define DDIOSCL     DDD3

#endif
