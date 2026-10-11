#include <stdio.h>
int main()
{
    int i, j, n = 5;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i % 2 == 1)
                printf("%d", j);
            else
                printf("%c", 'A' + j - 1);
        }
        printf("\n");
    }
    return 0;
}