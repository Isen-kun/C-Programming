
main()
{
    char str1[50], copy[50];
    void xstrrev(char *);
    int p;
    printf("Enter the string:");
    gets(str1);
    strcpy(copy,str1);
    printf("original string is: %s\n",str1);
    xstrrev(str1);
    printf("reversed string is: %s\n",str1);
    p=strcmp(copy,str1);
    if(p==0)
    printf("The string %s is a palindrome\n",copy);
    else
    printf("The string %s is not a palindrome\n",copy);
}

void xstrrev(char *str)
{
  char *start,*end;
  char ch;
  int len,i;
  start=str;
  end=str;
  len=strlen(str);
   for(i=0;i<len-1;i++)
    end++;
    for(i=0;i<len/2;i++)
    {
      ch=*start;
      *start=*end;
      *end=ch;
      start++;
      end--;
    }
}
