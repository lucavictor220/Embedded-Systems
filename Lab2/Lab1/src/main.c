/*
 * Lab1.c
 *
 * Created: 11/6/2016 1:03:04 PM
 *  Author: Vitiok
 */ 


#include "../headers/uart_stdio.h"
#include <avr/delay.h>

int main() {
	//uart_stdio_Init();
	// Set data direction register to output
	DDRC = 0xFF;
	
	while(1){
		// Set 5V to every pin of C port
		PORTC = 0xFF;
		_delay_ms(1000);
		// Set 0V to every pin of C port
		PORTC = 0x00;
		_delay_ms(1000);
	}
	return 0;
}