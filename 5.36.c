#include <stdio.h>
#include <stdlib.h>

void hanoi(int n, char First, char Second, char Third);

int main() 
{
    system("chcp 65001 > nul");

    int n;
    printf("請輸入圓盤數量: ");
    scanf("%d", &n);
    printf("\n--- 移動步驟如下 ---\n");
    hanoi(n, 'A', 'B', 'C');

    return 0;
}

void hanoi(int n, char First, char Second, char Third)
{
    if (n == 1) 
    {
        printf("把盤子 1 從 %c 柱移動到 %c 柱\n", First, Second);
        return;
    }

    hanoi(n - 1, First,Third, Second);
    printf("把盤子 %d 從 %c 柱移動到 %c 柱\n", n, First,Second);

    hanoi(n - 1, Third, Second, First);
}