#include<xc.h>
#include<pic18f4550.h>

void main()
{
    int a=0x08,b=0x02,mul=0x00;
    mul=a*b;
    TRISD=0;
    PORTD=mul;
    return;    
}

#include<xc.h>
#include<pic18f4550.h>

void main()
{
    int a=0x08,b=0x02,div=0x00;
    div=a/b;
    TRISD=0;
    PORTD=div;
    return;    
}