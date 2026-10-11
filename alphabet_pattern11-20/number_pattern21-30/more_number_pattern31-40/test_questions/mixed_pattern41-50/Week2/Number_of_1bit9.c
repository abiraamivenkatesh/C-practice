#include <stdio.h>
int main()
{
    unsigned int n;
    int count = 0;

    printf("Enter a positive integer: ");
    scanf("%u", &n);

    while (n > 0)
    {
        if (n % 2 == 1)
        {
            count++;
        }

        n = n / 2;
    }
    printf("%d", count);
    return 0;
}