/*
 * button.c
 *
 * Created: 2017-04-18 09:59:05
 * Author : Bettan
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL 
#include <util/delay.h> 

int main(void)
{
	DDRB = 0; //Sätter alla pins B som inputs
    DDRD = 0xFF; //Och alla D som outputs
	
    while (1) 
    {
		//När vi vill läsa av digitala värden använder vi oss av 
		//PIN istället för PORT. I detta fall PORTB
		if (PINB & 1<<PB0) //Om pin PB0 är tillslagen
		{
			PORTD = 0xFF; //Tänd upp alla lysdioder på PORTD
		}
		else
		{
			PORTD = 0; //annars: Släck alla lysdioder på PORTD
		}
    }
}

