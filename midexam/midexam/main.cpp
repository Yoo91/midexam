/*
 * midexam.cpp
 *
 * Created: 2018-05-02 오후 3:36:00
 * Author : stc_174
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    /* Replace with your application code */
	DDRD = 0xff;
	PORTD = 0xff;
		
    while (1) 
    {
		PORTD = 0x00;
		_delay_ms(300);
		PORTD = 0xff;
		_delay_ms(300);
    }
}

