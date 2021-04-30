#include <avr/io.h>
#include<util/delay.h>
#define F_CPU

int main(void)
{    port();
    char data;
    while(1)
    {
        if(!(PIND&(1<<PD0))&&(!(PIND&(1<<PD1))))
        {
             PORTB|=(1<<PB0);
             InitAdc();
             DDRB|=(1<<PB1);
             timer();
             USARTInit(103);
             USARTWriteChar(data);

        }
        else
        {
        PORTB&=~(1<<PB0);
        }

    }


    return 0;
}



