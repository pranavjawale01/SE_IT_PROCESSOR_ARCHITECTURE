#include<xc.h>
#include<pic18f4550.h>

void main()
{
    int SIZE=0x05,TEMP=0x00;
    int ARR[] = {0x0E,0x09,0x0A,0x0F,0x03};
    for(int i=0x00;i<SIZE-0x01;i++)
    {
        for(int j=0x00;j<SIZE-i-0x01;j++)
        {
            if(ARR[j]>ARR[j+1])
            {
                TEMP = ARR[j];
                ARR[j] = ARR[j+1];
                ARR[j+1] = TEMP;
            }
        }
    }
    TRISD=0;
    for(int k=0x00;k<SIZE;k++)
    {
        PORTD=ARR[k];
        for(int l=0x00;l<500;l++)
        {
            for(int m=0x00;m<50;m++)
            {
            }
        }
    }
    return;
}





#include<xc.h>
#include<pic18f4550.h>

void main()
{
    int SIZE=0x05,TEMP=0x00;
    int ARR[] = {0x0E,0x09,0x0A,0x0F,0x03};
    for(int i=0x00;i<SIZE-0x01;i++)
    {
        for(int j=0x00;j<SIZE-i-0x01;j++)
        {
            if(ARR[j]>ARR[j+1])
            {
                TEMP = ARR[j];
                ARR[j] = ARR[j+1];
                ARR[j+1] = TEMP;
            }
        }
    }
    TRISD=0;
    for(int k=SIZE-1;k>=0x00;--k)
    {
        PORTD=ARR[k];
        for(int l=0x00;l<500;l++)
        {
            for(int m=0x00;m<50;m++)
            {
            }
        }
    }
    return;
}