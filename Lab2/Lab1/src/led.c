/*
 * led.c
 *
 * Created: 11/26/2016 4:39:17 PM
 *  Author: Vitiok
 */ 

#include "../headers/led.h"

void ledInit(struct Leds *led) {
	*(led->ddr) |= 1 << led->pin;
}

void ledOn(struct Leds *led) {
	*(led->port) |= 1 << led->pin;
}

void ledOff(struct Leds *led) {
	*(led->port) &= ~(1 << led->pin);
}
