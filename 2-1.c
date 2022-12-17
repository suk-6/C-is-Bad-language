// #include <stdio.h>
// int main()
// {
//     int a, b, m;
//     a = 5, b = 3;
//     if (a > b)
//         m = a;
//     else
//         m = b;
//     printf("%d", m);
// }

#include <stdio.h>
int max(int p, int q)
{
    if (p > q)
    {
        return p;
    }
    else
        return q;
}

int main()
{
    int a, b, m;
    a = 5, b = 3;

    m = max(a, b);

    printf("%d", m);
}