#include<stdio.h>

void main()
{
    float gs, bs;
    printf("Enter basic salary of the employee");
    scanf("%f",&bs);
    gs=bs+(0.75*bs)+(0.15*bs);
    printf("The Gross salary of the employee=%f",gs);
}
