#include<stdio.h>
#include<stdlib.h>
char alphabet(char);
int main()
{
    system("chcp 65001>nul");
    char AL;
    printf("請輸入一個字母:");
    scanf("%c",&AL);
    printf("%c",alphabet(AL));

    return 0;
}

char alphabet(char AL)
{
    if(AL=='A')
        return 'a';
    else if(AL=='B')
        return 'b';
    else if(AL=='C')
        return 'c';
    else if(AL=='D')
        return 'd';
    else if(AL=='E')
        return 'e';
    else if(AL=='F')
        return 'f';
    else if(AL=='G')
        return 'g';
    else if(AL=='H')
        return 'h';
    else if(AL=='I')
        return 'i';
    else if(AL=='J')
        return 'j';
    else if(AL=='K')
        return 'k';
    else if(AL=='L')
        return 'l';
    else if(AL=='M')
        return 'm';
    else if(AL=='N')
        return 'n';
    else if(AL=='O')
        return 'o';
    else if(AL=='P')
        return 'p';
    else if(AL=='Q')
        return 'q';
    else if(AL=='R')
        return 'r';
    else if(AL=='S')
        return 's';
    else if(AL=='T')
        return 't';
    else if(AL=='U')
        return 'u';
    else if(AL=='V')
        return 'v';
    else if(AL=='W')
        return 'w';
    else if(AL=='X')
        return 'x';
    else if(AL=='Y')
        return 'y';
    else if(AL=='Z')
        return 'z';
}