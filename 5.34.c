#include<stdio.h>
#include<stdlib.h>
int EX(int,int);

int main()
{
    system("chcp 65001>nul");
    int a,b;
    printf("請輸入底數:");
    scanf("%d",&a);
    printf("請輸入次方數:");
    scanf("%d",&b);
    printf("%d的%d次方為:%d",a,b,EX(a,b));

    return 0;
}

int EX(int x,int y)
{
    int ex=x;
    for(int i=1;i<y;i++)
    {
        ex=ex*x;
    }
    return ex;
}