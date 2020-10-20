/* Fundamental Types Declaration and assignment*/

#include <stdio.h>

int main(void)
{
    int a = 5, b = 7, c = 6; //declaration and initialisation
    double average = 0.0;
    printf("a=%d, b=%d, c=%d\n", a, b, c);
    average = (a + b + c) / 3.0; //conversion
    printf("average = %lf\n", average);
    return 0;
}