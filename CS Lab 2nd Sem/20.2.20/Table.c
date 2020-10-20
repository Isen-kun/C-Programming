#include<stdio.h>

void main()
{
    int a;
    char m, g;
    printf("Enter the Age, Gender and the Martial status of the Employee: ");
    scanf("%d%c%c",&a,&g,&m);
    if((g=='M' && a>=52 && m=='m')||(g=='F' && a<=45 && m=='u'))
    {
      printf("The Employee is insured");
    }
    else
    {
        printf("The employee is not insured");
    }
}
