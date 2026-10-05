#include <stdio.h>

int main()
{
    int x;

    printf("Enter No: ");
    scanf("%d", &x);

    if ((x & 1) == 1)
        printf("No is odd");
    else
        printf("No is even");

    return 0;
}