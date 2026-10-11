#include <stdio.h>

int main()
{
    int x, i = 0;
    printf("Enter a non-negative integer: ");
    scanf("%d", &x);

    while ((i + 1) * (i + 1) <= x)
    {
        i++;
    }
    printf("%d", i);
    return 0;
}