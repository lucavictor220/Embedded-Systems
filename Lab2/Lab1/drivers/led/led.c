/*
 * led.c
 *
 * Created: 11/26/2016 4:39:17 PM
 *  Author: Vitiok
 */ 

#include "led.h"

void ledInit(struct Led *led) {
	*(led->ddr) |= 1 << led->pin;
}

void ledOn(struct Led *led) {
	*(led->port) |= 1 << led->pin;
}

void ledOff(struct Led *led) {
	*(led->port) &= ~(1 << led->pin);
}
