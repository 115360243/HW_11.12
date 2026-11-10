#include<stdio.h>
#include<stdlib.h>
unsigned long long int FIB(unsigned int);
int main()
{
    system("chcp 65001>nul");
    unsigned int n=0;

    while(1)
    {
        unsigned long long int a=FIB(n);
        unsigned long long int b=FIB(n+1);

        if(b<a)
        {
            printf("系統能正確計算的最大費氏數列為第%u項的:%llu",n,FIB(n));
            break;
        }
        n++;
    }

    return 0;
}

unsigned long long int FIB(unsigned int r)
{
    unsigned int x=0,y=1,z;
    if(r==0)
        return 0;
    if(r==1)
        return 1;
    for(unsigned int i=2;i<=r;i++)
    {
        z=x+y;
        x=y;
        y=z;
    }

    return z;
}