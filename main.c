#include <avr/io.h>
#include<util/delay.h>
#define F_CPU

int main(void)
{
    port();
    InitAdc();
    uint16_t temp;
    timer();
    DDRB|=(1<<PB1);
     USARTInit(103);
    while(1)
    {  if(!(PIND&(1<<PD0))&&(!(PIND&(1<<PD1))))
        {
             PORTB|=(1<<PB0);
        }
        else
        {
        PORTB&=~(1<<PB0);
        }
         temp=ReadAdc(8);
         if(temp>0 && temp<=200)
        {
            OCR1A=200;
        }
      if(temp>=210 && temp<=500)
        {
            OCR1A=410;
        }
      if(temp>=510 && temp<=700)
        {
            OCR1A=717;
        }
      if(temp>=710 && temp<=1024)
        {
            OCR1A=973;
        }
      USARTWriteChar();

    }


    return 0;
}

