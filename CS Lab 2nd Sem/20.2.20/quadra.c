#include<stdio.h>
#include<math.h>

void main()
{
   float a,b,c,d,r1,r2,R1,R2,k;
   printf("Enter the a,b,c of a Quadratic equation: ");
   scanf("%f%f%f",&a,&b,&c);
   d=((b*b)-(4*a*c));
   //k=sqrt(d);
   r1=((-1*b)/(2*a));
   //r2=k/2*a;
   //R1=r1+r2;
   //R2=r1-r2;
   if(d==0)
   {
       printf("The roots are same and=%f",r1);
   }
   else if(d>0)
   {
       k=sqrt(d);
       r2=k/(2*a);
       R1=r1+r2;
       R2=r1-r2;
       printf("The root are=%f and=%f",R1,R2);
   }
   else
   {
       k=sqrt(abs(d));
       printf("k= %f",k);
       r2=k/(2*a);
       printf("The first root is=%f + i %f",r1,r2);
       printf("\n The second root is=%f - i %f",r1,r2);
   }
}
