#include <stdio.h>
int main()
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("false");
        return 0;
    }
    while (n % 2 == 0)
    {
        n = n / 2;
    }
    if (n == 1)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;
}