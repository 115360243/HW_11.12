#include<stdio.h>
#include<stdlib.h>
int FIB(int);

int main()
{
    system("chcp 65001>nul");
    int a;
    printf("請輸入a=");
    scanf("%d",&a);
    printf("費氏數列第%d項為:%d",a,FIB(a));

    return 0;
}

int FIB(int b)
{
    int x=0,y=1,z;
    if(b==0)
        return 0;
    if(b==1)
        return 1;
    for(int i=2;i<b;i++)
    {
        z=x+y;
        x=y;
        y=z;
    }

    return z;