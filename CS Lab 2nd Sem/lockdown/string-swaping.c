main()
{
    char names[][10]={"kolkata", "mumbai", "pune", "bihar", "punjab"};
     int i;
     char temp;
     for(i=0;i<5;i++)
     printf("%s\n",names[i]);
     for(i=0;i<10;i++)
     {
         temp=names[2][i];
         names[2][i]=names[3][i];
         names[3][i]=temp;
     }
     printf("\nafter swaping:\n");
     for(i=0;i<5;i++)
     printf("%s\n",names[i]);
}
