#include <stdio.h>

int main()
{
    int su[7] = {1, 0, 1, 1, 0, 1, 1};
    int a, cnt, pa;

    cnt = 0;

    for (a = 0; a < (sizeof(su) / sizeof(int)); a++)
    {
        if (su[a] == 1)
        {
            cnt++;
        }
    }

    if (cnt % 2 == 0)
    {
        pa = 1;
    }
    else
        pa = 0;

    printf("%d", pa);
}

// result: 0