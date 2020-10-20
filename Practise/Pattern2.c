#include<stdio.h>
//Pattern without space


void main()
{
    int i,j,c;
    for(i=5;i>=1;i--)
    {
        c=64;
        for(j=1;j<=i;j++)
        {
            c++;
            printf("%c ",c);
        }
        printf("\n");
    }
}

