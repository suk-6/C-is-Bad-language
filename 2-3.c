#include <stdio.h>
int p(int a, int b)
{
    if (a > b)
    {
        return a - b;
    }
    else
        return b - a;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    printf("%d", p(a, b));
}

// input: 4 9
// output: 5