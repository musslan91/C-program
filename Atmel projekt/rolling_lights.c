/*
 * Rolling_Lights.c
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
	PORTD = 1; //Tänder upp Least Significant Bit. 
    while (1) 
    {
		if (PORTD == 0) //Om ettan flyttat sig utanför området, dvs PORTD = 0B00000000 så sätt den till 1.
			PORTD = 1;
		_delay_ms(500);
		PORTD = PORTD << 1; //Flyttar 1:an ett steg åt vänster så: 0B00000001 blir 0B00000010
		
    }
}

