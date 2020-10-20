#include <stdio.h>
#include<math.h>

void main()
{
    int a,b,c;
    float ar,s;
    printf("Enter first side of the triangle=");
    scanf("%d",&a);
    printf("Enter second side of the triangle=");
    scanf("%d",&b);
    printf("Enter third side of the triangle=");
    scanf("%d",&c);
    s=(a+b+c)/2;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of the triangle=%f",ar);
}
