#include <stdio.h>
int main()
{
    int ct[5] = {3, 1, 2, 5, 4};
    int tmp;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < (5 - 1) - i; j++)
        {
            if (ct[j] < ct[j + 1])
            {
                tmp = ct[j];
                ct[j] = ct[j + 1];
                ct[j + 1] = tmp;
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", ct[i]);
    }
}

/*
result:

5 4 3 2 1
*/