#include<stdio.h>
int main()
{
  float units,rate,tot;
  char name[30];

  printf("\n Enter consumer name:");
  gets(name);
  printf("\n Enter units consumed:");
  scanf("%f",&units);

  if(units<0)
  {
    printf("\n Ivalid input!");
    return 0;
  }

  if(units<=200)
   rate=0.8*units;
  else if ((units>200)&&(units<=300))
   rate=0.8*200+0.9*(units-200);
  else if (units>300)
   rate=0.8*200+0.9*100+1.0*(units-300);
  tot=rate+100;

  if(tot>400)
  tot=0.15*tot+tot;

  printf("\nName: %s ",name);
  printf("\nUnits: %.3f",units);
  printf("\nBillAMt:Rs %.2f",tot); 
}