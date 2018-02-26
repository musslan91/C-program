/*
 * keypad.c
 *
 * Created: 2017-04-18 09:59:05
 * Author : Bettan
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL 
#define blinkdelay 250 //Avg�r blinkhastighet f�r lysdioden: l�gre v�rde = snabbare
#include <util/delay.h> 



/*
*	blink(int nr_times)
*   Blinkar lysdioden p� Arduino pin 11
*	det antal g�nger som beg�rts
*	Blinkhastigheten best�ms av blinkdelay 
*/
void blink(int nr_times)
{
	
	for (int i = 0; i<nr_times; i++)
	{
			PORTB |= (1<<3); //Sl�r p� lysdiod p� Arduino pin 11
			_delay_ms(blinkdelay);
			PORTB &= ~(1<<3); //Sl�r av lysdiod p� Arduino pin 11
			_delay_ms(blinkdelay);
	}

}

/*
*	blinkZero()
*   Blinkar lysdioden p� Arduino pin 11
*	i ett snabbt m�nster under 0.5 sekunder
*	f�r att representera '0'
*/
void blinkZero()
{
	for (int i = 0; i<10; i++)
	{
		PORTB |= (1<<3); //Sl�r p� lysdiod p� Arduino pin 11
		_delay_ms(25);
		PORTB &= ~(1<<3); //Sl�r av lysdiod p� Arduino pin 11
		_delay_ms(25);
	}
}

/*
*	blinkStar()
*	TODO: Eget m�nster f�r att representera '*'
*	Just nu anropar den bara blinkZero()
*/
void blinkStar()
{
blinkZero();
}

/*
*	blinkHash()
*	TODO: Eget m�nster f�r att representera '#'
*	Just nu anropar den bara blinkZero()
*/
void blinkHash()
{
blinkZero();
}

int main(void)
{
	DDRB = 0xFF; //S�tter alla pins som OUTPUT p� PORTB
	DDRD = 0;	 //S�tter alla pins som INPUT p� PIND
    while (1) 
    {
		//--Kolumn 2--
		
		PORTB = (1<<PB0); //T�nder upp pin8 p� Arduino
		_delay_ms(1); //V�ntar lite s� att PORT hinner st�lla om sig
		if (PIND & (1<<PD2)) //Om pin2 p� Arduino �r h�g
			blink(2);
		if (PIND & (1<<PD3)) //Om pin3 p� Arduino �r h�g
			blinkZero(); //Speciellt blinkande f�r 0
		if (PIND & (1<<PD4)) //Om pin4 p� Arduino �r h�g
			blink(8);
		if (PIND & (1<<PD5)) //Om pin5 p� Arduino �r h�g
			blink(5);
	
		//--Kolumn 1--

		PORTB = (1<<PB1); //T�nder upp pin9 p� Arduino
		_delay_ms(1); //V�ntar lite s� att PORT hinner st�lla om sig
		if (PIND & (1<<PD2)) //Om pin2 p� Arduino �r h�g
			blink(1);
		if (PIND & (1<<PD3)) //Om pin3 p� Arduino �r h�g
			blinkStar(); //Speciellt blinkande f�r 0
		if (PIND & (1<<PD4)) //Om pin4 p� Arduino �r h�g
			blink(7);
		if (PIND & (1<<PD5)) //Om pin5 p� Arduino �r h�g
			blink(4);

		//--Kolumn 3--

		PORTB = (1<<PB2); //T�nder upp pin9 p� Arduino
		_delay_ms(1); //V�ntar lite s� att PORT hinner st�lla om sig
		if (PIND & (1<<PD2)) //Om pin2 p� Arduino �r h�g
			blink(3);
		if (PIND & (1<<PD3)) //Om pin3 p� Arduino �r h�g
			blinkHash(); //Speciellt blinkande f�r 0
		if (PIND & (1<<PD4)) //Om pin4 p� Arduino �r h�g
			blink(9);
		if (PIND & (1<<PD5)) //Om pin5 p� Arduino �r h�g
			blink(6);

    }
}

