#include <xc.h>
#include <pic18f4550.h>

void T0Delay(void);

void main(void) {
    TRISD=0x00;
    while(1)
    {
        PORTD=0x55;
        T0Delay();
        PORTD=0xAA;
        T0Delay();
    }
    //return;
}
void T0Delay()
{
    T0CON=0x02;
    TMR0H=0x35;
    TMR0L=0x00;
    T0CONbits.TMR0ON=1;
    while(INTCONbits.TMR0IF==0);
    T0CONbits.TMR0ON=0;
    INTCONbits.TMR0IF=0;
}




#include <p18f4550.h>

void delay(unsigned int time)
{
    unsigned int i,j;
    for(i=0;i<time;i++)
        for(j=0;j<5000;j++);
}

void main(void)
{
   TRISB = 0x00;
   LATB = 0xFF;

   while(1)                                //Loop forever;
   {
       LATB = ~LATB;
       delay(200);
   }
}