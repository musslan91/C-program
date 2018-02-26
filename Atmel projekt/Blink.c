/*
 * Blink.c
 *
 * Created: 2017-04-18 09:59:05
 * Author : Bettan
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL //Definierar CPU-hastighet: Atmega328p jobbar på 16 Mhz
#include <util/delay.h> //Ger oss tillgång till delay-funktioner

int main(void)
{
//DDRD står för data-direction-registry D och avgör input eller output
    DDRD = 0xFF; //Sätter alla pinnar på PORTD som output. Vi kunde ha skrivit 255 decimalt lika gärna.
    while (1) 
    {
		PORTD = 0xFF; //Slår på samtliga pins på PORTD
		_delay_ms(1000); //Väntar 1 sekund
		PORTD = 0; //Slår av samtliga pins på PORTD
		_delay_ms(1000); //Väntar 1 sekund
    }
}

