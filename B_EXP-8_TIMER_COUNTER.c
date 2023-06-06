#include<xc.h>
#include<pic18f4550.h>

void main()
{
    TRISD=0x00;
    TRISB=0x00;    
    T0CON=0x48;
    TMR0L=0x00;
    int count=0x00;
    while(1)
    {
        T0CONbits.TMR0ON=1;
        do
        {      
            /*PORTD=TMR0L;*/
            for(int i=0;i<500 ;i++)
            {
                for(int j=0;j<100;j++)
                {}
            }   
        }
    
        while(INTCONbits.TMR0IF==0);
        count += 0x01;
        
        PORTD=0xFF;
        PORTB=count;
        for(int i=0;i<100 ;i++)
        {
            for(int j=0;j<100;j++)
            {}
        }    
        T0CONbits.TMR0ON=0;
        INTCONbits.TMR0IF=0;
        if(T0CONbits.TMR0ON==0)
        {
            PORTD=0x00;
        }
    }
}