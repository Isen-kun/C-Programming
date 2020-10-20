#include <stdio.h>

void main()
{
    int a,b,ch,temp;
    printf("Enter Two numbers: ");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("the swapped values are a=%d and b=%d",a,b);
}
