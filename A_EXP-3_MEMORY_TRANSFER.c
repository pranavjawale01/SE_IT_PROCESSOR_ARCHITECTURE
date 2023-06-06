#include <xc.h>
#include <pic18f4550.h>


void main() 
{
    int i;
    int src[]  = {0x01,0x02,0x04,0x08,0x16};
    int dest[] = {0x00,0x00,0x00,0x00,0x00};
    for(i=0;i<5;i++)
    {
        dest[i] = src[i];
    }
    TRISD=0;
    for(i=0;i<5;i++)
    {
        PORTD= dest[i];
        for(int n=0;n<1000;n++)
        {
            for(int j=0;j<50;j++){
            }
        }
    }    
    return;
}


#include <xc.h>
#include <pic18f4550.h>

void main(void) 
{
    int i;
    int src [] ={0x10,0x08,0x03,0x0A,0x0F};
    int dest[] ={0x00,0x00,0x00,0x00,0x00};
    for(i=0;i<5;i++)
    {
        dest [i] = src[i];
    }
    TRISD=0;
    TRISB=0;
    for(i=0;i<5;i++)
    {
        PORTB= dest[i];
        PORTD=PORTB;
        for(int k=0;k<1000;k++)
        {
            for(int j=0;j<200;j++)
            {
            }
        }
    }    
}