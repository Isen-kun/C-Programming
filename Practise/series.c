#include<stdio.h>

void main()
{
    int i,n,s=0;
    printf("Enter the nth term");
    scanf("%d",&n);
    printf("The series is\n");
    for(i=1;i<=n;i+=2)
    {
        printf("%d+",i);
        s+=i;
    }
    printf("\nThe sum of the series is=%d",s);
}
