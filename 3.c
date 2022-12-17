#include <stdio.h>
int main()
{
    static int a[5][5] = {0, 1};
    int k, m, n = 5;

    for (k = 0; k <= n; k++)
    {
        for (m = 1; m <= k; m++)
        {
            a[k][m] = a[k - 1][m - 1] + a[k - 1][m];
            printf("%d ", a[k][m]);
        }
        printf("\n");
    }
}