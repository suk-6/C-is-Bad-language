#include <stdio.h>
int add(int x, int y);

int main()
{
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    printf("두 수의 합 = %d", add(a, b));
}

int add(int x, int y)
{
    return x + y;
}

// input:
// 40
// 50

// output:
// 두 수의 합 = 90