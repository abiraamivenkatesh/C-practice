#include <stdio.h>

int main()
{
    int i, j, n = 5;
    int a = 1, b = 1, c;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", a);

            c = a + b;
            a = b;
            b = c;
        }
        printf("\n");
    }

    return 0;
}