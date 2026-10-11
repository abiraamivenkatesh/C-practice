#include <stdio.h>

int main()
{
    int num, i = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    while (i * i < num)
    {
        i++;
    }

    if (i * i == num)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;
}