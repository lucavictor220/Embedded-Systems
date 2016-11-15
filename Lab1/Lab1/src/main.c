/*
 * Lab1.c
 *
 * Created: 11/6/2016 1:03:04 PM
 *  Author: Vitiok
 */ 


#include <avr/delay.h>
#include "../headers/uart_stdio.h"

int main() {
	uart_stdio_Init();
	
	while(1){
		printf("Hello world\n");
		_delay_ms(1000);
	}
	return 0;
}