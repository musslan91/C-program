/*
 * Rolling_Lights.c
 *
 * Created: 2017-04-18 09:59:05
 * Author : Bettan
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL //Definierar CPU-hastighet: Atmega328p jobbar p� 16 Mhz
#include <util/delay.h> //Ger oss tillg�ng till delay-funktioner

int main(void)
{
//DDRD st�r f�r data-direction-registry D och avg�r input eller output
    DDRD = 0xFF; //S�tter alla pinnar p� PORTD som output. Vi kunde ha skrivit 255 decimalt lika g�rna.
	PORTD = 1; //T�nder upp Least Significant Bit. 
    while (1) 
    {
		if (PORTD == 0) //Om ettan flyttat sig utanf�r omr�det, dvs PORTD = 0B00000000 s� s�tt den till 1.
			PORTD = 1;
		_delay_ms(500);
		PORTD = PORTD << 1; //Flyttar 1:an ett steg �t v�nster s�: 0B00000001 blir 0B00000010
		
    }
}

