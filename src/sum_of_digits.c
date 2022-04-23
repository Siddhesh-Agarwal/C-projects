#include <stdio.h>

void main()
{
    int a;
    printf("a = ");
    scanf("%d", &a);
    int total = 0;
    while (a > 0)
    {
        total += a % 10;
        a = a / 10;
    }
    printf("Sum of digits is %d\n", total);
}