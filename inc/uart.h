#ifndef UART_H_INCLUDED
#define UART_H_INCLUDED

#include <avr/io.h>
#include<util/delay.h>

void USARTInit(uint16_t);
char USARTReadChar();
void USARTWriteChar(char);
#define F_CPU 16000000UL

#endif // UART_H_INCLUDED

