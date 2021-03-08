//Program to find roots of quadratic equation

#include<stdio.h>
#include<math.h>

int main()
{
  float a,b,c,d,r1,r2;

  printf("\n enter the coffecients of the equation:");
  scanf("%f%f%f",&a,&b,&c);

  if (a == 0)
  {
    printf("\n Error! The equation is linear. ");
    return 0;
  }

  d=b * b - 4 * a * c;

  if (d>0)
  {
    printf("\n Roots are real and distinct.");
    r1=(-b + sqrt (d))/(2*a);
    r2=(-b - sqrt (d))/(2*a);
    printf("\n R1= %.3f   R2= %.3f",r1,r2);
  }
  else if (d==0)
  {
    printf("\n Roots are real and equal.");
    r1=(-b/(2*a));
    printf("\n R1=%.3f and R2=%.3f",r1,r1);
  }
  else if (d<0)
  {
    printf("\n The roots are imaginary.");
    r1=-b/(2*a);
    r2=sqrt(-d)/(2*a);
    printf("\n R1= %.3f + %.3f i  R2= %.3f - %.3f i",r1,r2,r1,r2);

  }

}