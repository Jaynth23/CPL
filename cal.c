//program for a simple calculator
#include<stdio.h>

int main()
{
  int a, b;
  char op;

  printf("\n Please enter the operator: ");
  scanf ("%c", &op);
  printf("\n Please enter two numbers: ");
  scanf("%d%d", &a , &b);

  if(op == '+')
    printf("\n Sum of the 2 numbers is: %d", a + b );
  
  else if(op == '-')
    printf("\n Difference of the 2 numbers is: %d", a - b);

  else if(op == '*')
    printf("\n Product of the 2 numbers is: %d", a * b);
  
  else if(op == '/')
  {
    if(b == 0)
    {
      printf("\n Error! The denominator is 0");
      return 0;
    }
    else
      printf("\n Quotient of the 2 numbers is: %.3f",(float)a/b);
  }

  else if(op == '%')
  {
    if(b == 0)
    {
      printf("\n Error The denominator is zero!");
      return 0;
    }
    else 
      printf("\n The remainder of the two numbers is: %d",a%b);  
  }



  
  

}