/*
 * led.h
 *
 * Created: 11/26/2016 3:06:32 PM
 *  Author: Vitiok
 */ 


#ifndef LED_H_
#define LED_H_
#include <avr/io.h>

struct Leds {
	uint8_t pin;
	volatile uint8_t *ddr;
	volatile uint8_t *port;
};

void ledInit(struct Leds *led);
void ledOn(struct Leds *led);
void ledOff(struct Leds *led);




#endif /* LED_H_ */