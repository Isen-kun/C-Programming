/* Program to implement the sin function*/

#include <stdio.h>
#include <math.h>

int main(void)
{
    double a, res;
    printf("Enter the Value: ");
    scanf("%lf", &a);
    res = sin(a);
    printf("The sin of %lf is %lf", a, res);
    return 0;
}