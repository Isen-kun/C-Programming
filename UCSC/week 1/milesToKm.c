/* Miles to kilometer conversion*/

#include<stdio.h>

int main(void)
{
    int miles=26, yards=385;
    double kilometers;
    kilometers = 1.609*(miles+yards/1760);
    printf("\n A marathon is %lf kilometers. \n\n", kilometers);
    return 0;
}