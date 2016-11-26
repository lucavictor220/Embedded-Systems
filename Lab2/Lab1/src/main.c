/*
 * Lab1.c
 *
 * Created: 11/6/2016 1:03:04 PM
 *  Author: Vitiok
 */ 


#include "../headers/uart_stdio.h"
#include "../headers/led.h"
#include <avr/delay.h>


int main() {
	uart_stdio_Init();
	struct Leds green;
	green.pin = 7;
	green.ddr = &DDRC;
	green.port = &PORTC;
	ledInit(&green);
	DDRD = 0x00;
	while(1){
		if (~(PIND) & 0x04) {
			ledOn(&green);
		} else {
			ledOff(&green);
		}
	}
	return 0;
}