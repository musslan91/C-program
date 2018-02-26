/*
 * dim_leds.c
 *
 * Created: 2017-04-18 09:59:05
 * Author : Bettan
 */ 

#include <avr/io.h>
#define F_CPU 16000000UL 
#include <util/delay.h> 

//Genom att variera nedanst�ende kan man t ex dimma en lysdiod: Det �r s� PWM funkar
int on = 1;	//Duty-time
int off = 15; //Off-time


/* 
* delay_i v�ntar i antal millisekunder som vi matar in,
* men beh�ver inte vara fastst�llt fr�n b�rjan 
*/
void delay_i(int i)
{
	for (int j= 0; j<i;j++)
	_delay_ms(1);

}

int main(void)
{

    DDRD = 0xFF; 
	
    while (1) 
    {
		PORTD = 0xFF; 
		delay_i(on); //V�ntar i on-antal millisekunder
		PORTD = 0;
		delay_i(off); //V�ntar i off-antal millisekunder
		
    }
}

