#include <stdio.h>

int main()
{
int x, original, reverse = 0, digit;
printf("Enter a number: ");
scanf("%d", &x);
if (x < 0)
{
    printf("false");
    return 0;
}

original = x;
while (x > 0)
{
    digit = x % 10;
    reverse = reverse * 10 + digit;
    x = x / 10;
}
if (original == reverse)
{
    printf("true");
}
else
{
    printf("false");
}

return 0;
}
