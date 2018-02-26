/*
 * Blink.c
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
    while (1) 
    {
		PORTD = 0xFF; //Sl�r p� samtliga pins p� PORTD
		_delay_ms(1000); //V�ntar 1 sekund
		PORTD = 0; //Sl�r av samtliga pins p� PORTD
		_delay_ms(1000); //V�ntar 1 sekund
    }
}

