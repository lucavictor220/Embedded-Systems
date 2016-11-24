/*
 * uart_stdio.h
 *
 * Created: 11/6/2016 1:05:08 PM
 *  Author: Vitiok
 */ 


#ifndef _UART_STDIO_H
#define _UART_STDIO_H

#define UART_BAUD 9600
#define F_CPU 1000000UL


#include <stdio.h>
#include <avr/io.h>
#include <avr/delay.h>

void uart_stdio_Init(void);
void uart_PutChar(char c, FILE *stream);

#endif