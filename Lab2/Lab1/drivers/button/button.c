/*
 * button.c
 *
 * Created: 11/27/2016 1:58:29 PM
 *  Author: Vitiok
 */ 
#include "button.h"

void buttonInit(struct Button *button) {
	*(button->ddr) &= ~(1 << button->pinIndex);
}

char buttonIsPressed(struct Button *button) {
	if ( ~(*(button->pin)) & 1 << button->pinIndex) {
		return 1;
	}
	return 0;
}