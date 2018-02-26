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
	DDRB = 0; //S�tter alla pins B som inputs
    DDRD = 0xFF; //Och alla D som outputs
	
    while (1) 
    {
		//N�r vi vill l�sa av digitala v�rden anv�nder vi oss av 
		//PIN ist�llet f�r PORT. I detta fall PORTB
		if (PINB & 1<<PB0) //Om pin PB0 �r tillslagen
		{
			PORTD = 0xFF; //T�nd upp alla lysdioder p� PORTD
		}
		else
		{
			PORTD = 0; //annars: Sl�ck alla lysdioder p� PORTD
		}
    }
}

