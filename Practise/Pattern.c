#include<stdio.h>
//Patterns with space


void main()
{
    int i,j,c;
    for(i=5;i>=1;i--)
    {
        c=64;
        for(j=1;j<=i;j++)
        {
            c++;
            printf("%c",c);
        }

        for(j=1;j<=5-i;j++)
           printf("  ");

        c++;
        for(j=1;j<=i;j++)
        {
            c--;
            printf("%c",c);
        }
        printf("\n");
    }
}
