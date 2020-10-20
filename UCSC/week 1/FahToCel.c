/* Conversion to Fahrenheit to celcius*/

#include<stdio.h>

int main(void)
{
    int fahrenheit, celcius;
    printf("Please enter fahrenhet as an integer: ");
    scanf("%d", &fahrenheit);
    celcius=(fahrenheit-32)/1.8;
    printf("\n%d fahrenheit is %d celcius. \n", fahrenheit, celcius);
    return 0;
}