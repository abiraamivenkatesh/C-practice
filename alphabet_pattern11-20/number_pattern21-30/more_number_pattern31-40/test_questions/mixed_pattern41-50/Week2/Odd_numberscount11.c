#include <stdio.h>

int main()
{
    int low, high, count = 0;
    printf("Enter low and high: ");
    scanf("%d %d", &low, &high);

    for (int i = low; i <= high; i++)
    {
        if (i % 2 != 0)
        {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}