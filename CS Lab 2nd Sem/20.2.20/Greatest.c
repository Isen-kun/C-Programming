#include<stdio.h>
//Using logical operators

void main()
{
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    {
        printf("%d is the greatest number",a);
    }
    else if(b>c && b>a)
    {
        printf("%d is the greatest number",b);
    }
    else
    {
        printf("%d is the greatest number",c);
    }
}
