/*
 * dac.c
 *
 * Created: 2017-04-03 10:09:32
 * Author : Marcu
 */ 

#include <avr/io.h>
#define F_CPU   16000000UL
#include <util/delay.h>




int main(void)
{	
	DDRD = 255;
	int mydelay = 50;
    while (1) 
    {
		
		PORTD = 1;
		_delay_ms(mydelay);
		
		PORTD = 2;
		_delay_ms(mydelay);
		
		PORTD = 4;
		_delay_ms(mydelay);
		
		PORTD = 8;
		_delay_ms(mydelay);
		
		PORTD = 16;
		_delay_ms(mydelay);
		
		PORTD = 32;
		_delay_ms(mydelay);
		
		PORTD = 64;
		_delay_ms(mydelay);
		
		PORTD = 128;
		_delay_ms(mydelay);
    }
}

