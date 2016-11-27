/*
 * Lab1.c
 *
 * Created: 11/6/2016 1:03:04 PM
 *  Author: Vitiok
 */ 


#include "../drivers/uart/uart_stdio.h"
#include "../drivers/led/led.h"
#include "../drivers/button/button.h"
#include <avr/delay.h>


int main() {
	uart_stdio_Init();
	struct Led greenLed;
	struct Led redLed;
	
	struct Button buttonForGreenLed;
	struct Button buttonForRedLed;
	
	buttonForGreenLed.pinIndex = 2;
	buttonForGreenLed.ddr = &DDRD;
	buttonForGreenLed.pin = &PIND;
	
	buttonForRedLed.pinIndex = 3;
	buttonForRedLed.ddr = &DDRD;
	buttonForRedLed.pin = &PIND;
	
	greenLed.pin = 7;
	greenLed.ddr = &DDRC;
	greenLed.port = &PORTC;
	
	redLed.pin = 0;
	redLed.ddr = &DDRC;
	redLed.port = &PORTC;
	
	ledInit(&greenLed);
	ledInit(&redLed);
	
	buttonInit(&buttonForGreenLed);
	buttonInit(&buttonForRedLed);
	
	while(1){
		if (buttonIsPressed(&buttonForGreenLed)) {
			ledOn(&greenLed);
		} else {
			ledOff(&greenLed);
		}
		if (buttonIsPressed(&buttonForRedLed)) {
			ledOn(&redLed);
		} else {
			ledOff(&redLed);
		}
	}
	return 0;
}