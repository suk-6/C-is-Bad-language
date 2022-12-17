#include <stdio.h>

int main()
{
    int k, m;
    int d[10] = {1, 5, 3, 2, 1, 4, 2, 5, 3, 1};
    int cnt[5] = {0,
                  0,
                  0,
                  0,
                  0};

    for (k = 1; k < 6; k++) // 1~5까지 돌아가는 반복문
    {
        for (m = 0; m < 10; m++)
        {
            if (k == d[m])
            {
                cnt[k - 1]++;
            }
        }
    }

    for (k = 0; k < 5; k++)
    {
        printf("%d | %d\n", k + 1, cnt[k]);
    }
}

// result
// 1 | 3
// 2 | 2
// 3 | 2
// 4 | 1
// 5 | 2