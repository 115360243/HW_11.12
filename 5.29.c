#include<stdio.h>
#include<stdlib.h>

int LCM(int,int);

int main()
{
    system("chcp 65001>nul");

    int num1,num2,x,y;
    printf("請輸入兩個整數:");
    scanf("%d%d",&num1,&num2);
    printf("%d跟%d的最小公倍數為: %d",num1,num2,LCM(num1,num2));

    return 0;
}

int LCM(int x,int y)
{
    int lcm=1;
    while(x%2==0 && y%2==0)
    {
        lcm=lcm*2;
        x=x/2;
        y=y/2;
    }
    while(x%3==0 && y%3==0)
    {
        lcm=lcm*3;
        x=x/3;
        y=y/3;
    }
    while(x%5==0 && y%5==0)
    {
        lcm=lcm*5;
        x=x/5;
        y=y/5;
    }
    while(x%7==0 && y%7==0)
    {
        lcm=lcm*7;
        x=x/7;
        y=y/7;
    }
    while(x%11==0 && y%11==0)
    {
        lcm=lcm*11;
        x=x/11;
        y=y/11;
    }
    while(x%13==0 && y%13==0)
    {
        lcm=lcm*13;
        x=x/13;
        y=y/13;
    }
    while(x%17==0 && y%17==0)
    {
        lcm=lcm*17;
        x=x/17;
        y=y/17;
    }
    while(x%19==0 && y%19==0)
    {
        lcm=lcm*19;
        x=x/19;
        y=y/19;
    }
    while(x%23==0 && y%23==0)
    {
        lcm=lcm*23;
        x=x/23;
        y=y/23;
    }
    while(x%29==0 && y%29==0)
    {
        lcm=lcm*29;
        x=x/29;
        y=y/29;
    }
    while(x%31==0 && y%31==0)
    {
        lcm=lcm*31;
        x=x/31;
        y=y/31;
    }
    while(x%37==0 && y%37==0)
    {
        lcm=lcm*37;
        x=x/37;
        y=y/37;
    }
    while(x%41==0 && y%41==0)
    {
        lcm=lcm*41;
        x=x/41;
        y=y/41;
    }
    while(x%43==0 && y%43==0)
    {
        lcm=lcm*43;
        x=x/43;
        y=y/43;
    }
    while(x%47==0 && y%47==0)
    {
        lcm=lcm*47;
        x=x/47;
        y=y/47;
    }
    while(x%53==0 && y%53==0)
    {
        lcm=lcm*53;
        x=x/53;
        y=y/53;
    }
    while(x%59==0 && y%59==0)
    {
        lcm=lcm*59;
        x=x/59;
        y=y/59;
    }
    while(x%61==0 && y%61==0)
    {
        lcm=lcm*61;
        x=x/61;
        y=y/61;
    }
    while(x%67==0 && y%67==0)
    {
        lcm=lcm*67;
        x=x/67;
        y=y/67;
    }
    while(x%71==0 && y%71==0)
    {
        lcm=lcm*71;
        x=x/71;
        y=y/71;
    }
    while(x%73==0 && y%73==0)
    {
        lcm=lcm*73;
        x=x/73;
        y=y/73;
    }
    while(x%79==0 && y%79==0)
    {
        lcm=lcm*79;
        x=x/79;
        y=y/79;
    }
    while(x%83==0 && y%83==0)
    {
        lcm=lcm*83;
        x=x/83;
        y=y/83;
    }
    while(x%89==0 && y%89==0)
    {
        lcm=lcm*89;
        x=x/89;
        y=y/89;
    }
    while(x%97==0 && y%97==0)
    {
        lcm=lcm*97;
        x=x/97;
        y=y/97;
    }
    lcm=lcm*x*y;
    return lcm;
}