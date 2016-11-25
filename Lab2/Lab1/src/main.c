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
	// Set data direction register to input
	DDRD = 0x00;
	while(1){
		if (~(PIND) & 0x02) {
			PORTC = 0xFF;
		} else {
			PORTC = 0x00;
		}
	}
	return 0;
}