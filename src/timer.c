#include <avr/io.h>

int timer()
{
TCCR1A|=(1<<COM1A1)|(1<<WGM11)|(1<<WGM10);
TCCR1B|=(1<<WGM12)|(1<<CS11)|(1<<CS10);
DDRB|=(1<<PB1);

while(1)
{
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
}

}
