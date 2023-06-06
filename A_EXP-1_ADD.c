#include<xc.h>
#include<pic18f4550.h>

void main() 
{
    int A,B,ADD; 
    A = 0x0A;
    B = 0x0F;
    ADD = 0x00;
    ADD = A+B;  
    TRISD = 0;
    PORTD = ADD;
    return;
}
