#include<stdio.h>
int main()
{
  int i,n,ele;
  printf("\nEnter the size of array:");
  scanf("%d",&n);
  int A[n];
  printf("\nEnter the array elements:");
  for(i=0 ; i<n ; i++)
  {
    scanf("%d",&A[i]);
  }
  printf("\nEnter the search element: ");
  scanf("%d",&ele);
  for(i=0 ; i<n ; i++)
  {
    if(A[i] == ele)
    {
      printf("\nThe postion of the element is:%d",i+1);
      break;
    }
  }
  if(i == n)
  {
    printf("\nElement not found!");
  }
}
