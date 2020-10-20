#include <stdio.h>

void copy(char ch1[])
{
    int i = 0;
    char ch[20];
    while (ch1[i] != '\0')
    {
        ch[i] = ch1[i];
        i++;
    }
    ch[i] = '\0';
    printf("The copied string is: %s", ch);
}

void main()
{
    char ch[20];
    printf("Enter a word: ");
    scanf("%s", &ch);
    copy(ch);
}