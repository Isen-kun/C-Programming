#include <stdio.h>

void main()
{
    int i, n, s = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (i = 0; n > 0; i++)
    {
        s += n % 10;
        n /= 10;
    }
    printf("The sum of the digits is %d", s);
}