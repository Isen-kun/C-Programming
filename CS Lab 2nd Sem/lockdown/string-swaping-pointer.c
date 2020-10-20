main()
{
    char *names[]={"kolkata", "mumbai", "pune", "bihar", "punjab"};
     int i;
     char *temp;
     for(i=0;i<5;i++)
     printf("%s\n",names[i]);
     temp=names[2];
     names[2]=names[3];
     names[3]=temp;
     printf("\nafter swaping:\n");
     for(i=0;i<5;i++)
     printf("%s\n",names[i]);
}
