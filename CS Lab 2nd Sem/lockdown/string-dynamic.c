main()
{
    char *names[5];//={"kolkata", "mumbai", "pune", "bihar", "punjab"};
     int i,len;
     char *p;
     char temp[10];
     for(i=0;i<5;i++)
     {
         printf("Enter string%d",i+1);
         gets(temp);
         len=strlen(temp);
         p=malloc(sizeof(len+1));
         strcpy(p,temp);
         names[i]=p;
     }
     for(i=0;i<5;i++)
     printf("%s\n",names[i]);
     /*temp=names[2];
     names[2]=names[3];
     names[3]=temp;
     printf("\nafter swaping:\n");
     for(i=0;i<5;i++)
     printf("%s\n",names[i]);*/
}
