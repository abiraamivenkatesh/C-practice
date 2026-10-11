#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of steps: ");
    scanf("%d", &n);
    int a = 1, b = 1, c;

    if (n == 0)
    {
        printf("1");
        return 0;
    }

    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    printf("%d", b);
    return 0;
}