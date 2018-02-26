#define F_CPU 16000000UL
#include <util/delay.h>
#include <avr/io.h>
#include <avr/interrupt.h>

int main(void)
}

DDRC = DDRC &= ~(1<<1); //Grön knapp
DDRC = DDRC &= ~(1<<2); //Röd knapp

int min_delay = 100;//Färdig delay efter man tryckt på en knapp.
int buttonpressed;


/*
DDRD PD1 = 1;//Led 0
DDRD PD2 = 2;// Led 1
DDRD PD3 = 4;// Led 2
DDRD PD4 = 8;//Led 3
DDRD PD5 = 16;// Led 4
DDRD PD6 = 32;//Led 5
DDRD PD7 = 64;//Led 6
DDRB PB8 = 128;//Led 7
DDRB PB9 =256;//Led 8
DDRB PB10 = 512;//Led 9
DDRB PB12 = 1024;//Led 10
PORTB = 0xB;//pin 11 transistor
*/
DDRD = 64;
DDRB = 8;
PORTB = 0xB;//Transistor

int varv_pa(void){
	if(DDRC &= (1<<1)){

		DDRD = 1;
		_delay_ms(min_delay);
		DDRD = 2;
		
		_delay_ms(min_delay);
		DDRD = 4;
		
		_delay_ms(min_delay);
		DDRD = 8;
		
		_delay_ms(min_delay);
		DDRD = 16;
		
		_delay_ms(min_delay);
		DDRD = 32;
		
		_delay_ms(min_delay);
		DDRD = 64;
		
		_delay_ms(min_delay);
		DDRB = 1;
		
		_delay_ms(min_delay);
		DDRB = 2;
		
		_delay_ms(min_delay);
		DDRB = 4;
		
		_delay_ms(min_delay);
		DDRB = 8;
	}
		
	else{
		DDRC = DDRC & ~(1<<1);
			
		}
	}


int varv_av(void){	
		if(DDRC &= (1<<2)){
		
		_delay_ms(min_delay);
		DDRB = 8;
		
		_delay_ms(min_delay);
		DDRB = 4;
		
		_delay_ms(min_delay);
		DDRB = 2;
		
		_delay_ms(min_delay);
		DDRB = 1;
		
		_delay_ms(min_delay);
		DDRD = 64;
		
		_delay_ms(min_delay);
		DDRD = 32;
		
		_delay_ms(min_delay);
		DDRD = 16;
		
		_delay_ms(min_delay);
		DDRD = 8;
		
		_delay_ms(min_delay);
		DDRD = 4;
		
		_delay_ms(min_delay);
		DDRD = 2;
		
		_delay_ms(min_delay);
		DDRD = 1;			
	}
	
	else{
		DDRC = DDRC & ~(1<<2);
	}
}

    /* Replace with your application code */
    while (1) {	
		
		varv_pa();
		
		varv_av();	
	
  }
}