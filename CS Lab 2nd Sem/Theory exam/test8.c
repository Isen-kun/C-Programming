#include <stdio.h>
#include <math.h>

void main()
{
    int i, n, x;
    float s = 0;
    printf("Enter the value of x : ");
    scanf("%d", &x);
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        s += ((i) / (pow(x, i)));
        //printf("%d/%d + ", i, pow(x, i));
        //s += ((i + 1) / (pow(x, i)));
    }
    s += 1;
    printf("The sum is %f", s);
}