#include<stdio.h>

void main()
{
  float s1,s2,s3,s4,s5,s;
  printf("Enter the marks of the 5 subjects: ");
  scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
  s=s1+s2+s3+s4+s5;
  s=s/5;
  if(s>90 && s<=100)
  {
      printf("The grade of the student is 'O' ");
  }
  else if(s>80 && s<=90)
  {
      printf("The grade of the student is 'E' ");
  }
  else if(s>70 && s<=80)
  {
      printf("The grade of the student is 'A' ");
  }
  else if(s>60 && s<=70)
  {
      printf("The grade of the student is 'B' ");
  }
  else if(s>50 && s<=60)
  {
      printf("The grade of the student is 'C' ");
  }
  else if(s>=40 && s<=50)
  {
      printf("The grade of the student is 'D' ");
  }
  else if(s<40)
  {
      printf("The grade of the student is 'F' ");
  }
}
