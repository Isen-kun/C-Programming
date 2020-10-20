#include <stdio.h>

void main()
{
    int a,b;
    printf("Enter Two numbers: ");
    scanf("%d%d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the swapped values are a=%d and b=%d",a,b);
}
