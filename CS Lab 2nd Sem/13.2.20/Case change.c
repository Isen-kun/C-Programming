#include <stdio.h>

void main()
{
    char ch;
    printf("Enter an alphabet=");
    scanf("%c",&ch);
    if(ch>=65&&ch<=90)
    {
        ch=ch+32;
    }
    else if(ch>=97&&ch<=122)
    {
        ch=ch-32;
    }
    printf("Case changed alphabet=%c",ch);
}
