#ifndef IO_H
#define IO_H

/*input/output panel connections
 */
//CLK: 
#define PORT_IOCLK  PORTD
#define PIOCLK      PD2
#define DDR_IOCLK   DDRD
#define DDIOCLK     DDD2
//DAT:
#define PORT_IODAT  PORTC
#define PIODAT      PC5
#define DDR_IODAT   DDRC
#define DDIODAT     DDC5
//KEY:
#define PORT_IOKEY  PORTC
#define PIN_IOKEY   PINC
#define PIOKEY      PC4
#define DDR_IOKEY   DDRC
#define DDIOKEY     DDC4
//LEDC:
#define PORT_IOLED  PORTD
#define PIOLED      PD7
#define DDR_IOLED   DDRD
#define DDIOLED     DDD7
//DIS0:
#define PORT_IODIS0 PORTB
#define PIODIS0     PB6
#define DDR_IODIS0  DDRB
#define DDIODIS0    DDB6
//DIS1:
#define PORT_IODIS1 PORTB
#define PIODIS1     PB7
#define DDR_IODIS1  DDRB
#define DDIODIS1    DDB7

//Three LEDs on the IO panel:
#define LED_ONOFF   0x01
#define LED_WATER   0x04
#define LED_CONT    0x08

//Four switches on the IO panel:
#define SW_ONOFF    0x01
#define SW_DOWN     0x02
#define SW_UP       0x04
#define SW_CONT     0x08

void io_init(void);
void io_set_LEDs(uint8_t st);
void io_print_nbr(uint8_t nbr);

#endif
