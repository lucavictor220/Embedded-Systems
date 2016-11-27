/*
 * button.h
 *
 * Created: 11/27/2016 1:54:31 PM
 *  Author: Vitiok
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_
#include <avr/io.h>

struct Button {
	uint8_t pinIndex;
	volatile uint8_t *ddr;
	volatile uint8_t *pin;
};

void buttonInit(struct Button *button);
char buttonIsPressed(struct Button *button);

#endif /* BUTTON_H_ */