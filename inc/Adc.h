#ifndef ADC_H_INCLUDED
#define ADC_H_INCLUDED

#include <avr/io.h>
#include<util/delay.h>

InitAdc();
ReadAdc(uint8_t ch);

#define F_CPU 16000000UL

#endif // ADC_H_INCLUDED
