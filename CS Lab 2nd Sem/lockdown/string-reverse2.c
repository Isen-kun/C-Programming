#include <stdio.h>
void xstrrev(char *str1,char *revstr)
{
    int i=0;
    while(*str1!='\0')
    {
     str1++;
     i++;
    }
    while(i>0)
    {
     --i;
     str1--;
     *revstr = *str1;
     revstr++;
    }
    *revstr='\0';
}

int main()
{
    char str1[50];
    char revstr[50];
    /*char *stptr = str1;
    char *rvptr = revstr;
    int i=-1;*/
 	printf("\n\n Pointer : Print a string in reverse order :\n");
	printf("------------------------------------------------\n");
    printf(" Input a string : ");
    scanf("%s",str1);
    xstrrev(str1,revstr);

    printf(" Reverse of the string is : %s\n\n",revstr);
    return 0;
}
