/*
 * led.h
 *
 * Created: 11/26/2016 3:06:32 PM
 *  Author: Vitiok
 */ 


#ifndef LED_H_
#define LED_H_
#include <avr/io.h>

struct Led {
	uint8_t pin;
	volatile uint8_t *ddr;
	volatile uint8_t *port;
};

void ledInit(struct Led *led);
void ledOn(struct Led *led);
void ledOff(struct Led *led);




#endif /* LED_H_ */