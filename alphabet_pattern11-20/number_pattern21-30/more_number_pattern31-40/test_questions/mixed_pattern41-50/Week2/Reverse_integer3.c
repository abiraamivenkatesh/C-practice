#include <stdio.h>
#include <limits.h>
int main()
{
int x, digit;
long long reverse = 0;
printf("Enter an integer: ");
scanf("%d", &x);

while (x != 0)
{
    digit = x % 10;
    reverse = reverse * 10 + digit;
    x = x / 10;
}
if (reverse < INT_MIN || reverse > INT_MAX)
{
    printf("0");
}
else
{
    printf("%lld", reverse);
}
return 0;
}
