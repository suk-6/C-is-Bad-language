#include <stdio.h>
int pp(int n);
int main()
{
    int num;
    scanf("%d", &num);
    printf("%2d", pp(num));
}

int pp(int n)
{
    int sum = 0;

    sum += n / 100;
    n = n % 100;

    sum += n / 10;
    n = n % 10;

    sum += n;

    return sum;
}

// result: 11