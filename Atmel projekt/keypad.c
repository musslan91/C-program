/*
 * keypad.c
 *
 * Created: 2017-04-18 09:59:05
 * Author : Bettan
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL 
#define blinkdelay 250 //Avgör blinkhastighet för lysdioden: lägre värde = snabbare
#include <util/delay.h> 



/*
*	blink(int nr_times)
*   Blinkar lysdioden på Arduino pin 11
*	det antal gånger som begärts
*	Blinkhastigheten bestäms av blinkdelay 
*/
void blink(int nr_times)
{
	
	for (int i = 0; i<nr_times; i++)
	{
			PORTB |= (1<<3); //Slår på lysdiod på Arduino pin 11
			_delay_ms(blinkdelay);
			PORTB &= ~(1<<3); //Slår av lysdiod på Arduino pin 11
			_delay_ms(blinkdelay);
	}

}

/*
*	blinkZero()
*   Blinkar lysdioden på Arduino pin 11
*	i ett snabbt mönster under 0.5 sekunder
*	för att representera '0'
*/
void blinkZero()
{
	for (int i = 0; i<10; i++)
	{
		PORTB |= (1<<3); //Slår på lysdiod på Arduino pin 11
		_delay_ms(25);
		PORTB &= ~(1<<3); //Slår av lysdiod på Arduino pin 11
		_delay_ms(25);
	}
}

/*
*	blinkStar()
*	TODO: Eget mönster för att representera '*'
*	Just nu anropar den bara blinkZero()
*/
void blinkStar()
{
blinkZero();
}

/*
*	blinkHash()
*	TODO: Eget mönster för att representera '#'
*	Just nu anropar den bara blinkZero()
*/
void blinkHash()
{
blinkZero();
}

int main(void)
{
	DDRB = 0xFF; //Sätter alla pins som OUTPUT på PORTB
	DDRD = 0;	 //Sätter alla pins som INPUT på PIND
    while (1) 
    {
		//--Kolumn 2--
		
		PORTB = (1<<PB0); //Tänder upp pin8 på Arduino
		_delay_ms(1); //Väntar lite så att PORT hinner ställa om sig
		if (PIND & (1<<PD2)) //Om pin2 på Arduino är hög
			blink(2);
		if (PIND & (1<<PD3)) //Om pin3 på Arduino är hög
			blinkZero(); //Speciellt blinkande för 0
		if (PIND & (1<<PD4)) //Om pin4 på Arduino är hög
			blink(8);
		if (PIND & (1<<PD5)) //Om pin5 på Arduino är hög
			blink(5);
	
		//--Kolumn 1--

		PORTB = (1<<PB1); //Tänder upp pin9 på Arduino
		_delay_ms(1); //Väntar lite så att PORT hinner ställa om sig
		if (PIND & (1<<PD2)) //Om pin2 på Arduino är hög
			blink(1);
		if (PIND & (1<<PD3)) //Om pin3 på Arduino är hög
			blinkStar(); //Speciellt blinkande för 0
		if (PIND & (1<<PD4)) //Om pin4 på Arduino är hög
			blink(7);
		if (PIND & (1<<PD5)) //Om pin5 på Arduino är hög
			blink(4);

		//--Kolumn 3--

		PORTB = (1<<PB2); //Tänder upp pin9 på Arduino
		_delay_ms(1); //Väntar lite så att PORT hinner ställa om sig
		if (PIND & (1<<PD2)) //Om pin2 på Arduino är hög
			blink(3);
		if (PIND & (1<<PD3)) //Om pin3 på Arduino är hög
			blinkHash(); //Speciellt blinkande för 0
		if (PIND & (1<<PD4)) //Om pin4 på Arduino är hög
			blink(9);
		if (PIND & (1<<PD5)) //Om pin5 på Arduino är hög
			blink(6);

    }
}

