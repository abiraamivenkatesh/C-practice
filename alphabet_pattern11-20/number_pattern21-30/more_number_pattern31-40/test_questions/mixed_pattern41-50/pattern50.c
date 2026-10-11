#include <stdio.h>
int main()
{
    int i, j, n = 5, c;
    for (i = 0; i < n; i++)
    {
        for (j = 1; j <= n - i - 1; j++)
            printf(" ");
        c = 1;
        for (j = 0; j <= i; j++)
        {
            printf("%d ", c);
            c = c * (i - j) / (j + 1);
        }

        printf("\n");
    }
    return 0;
}