#include <stdio.h>
#include <stdlib.h>
int main() 
{
  int i,j,a;
  printf("enter a number :");
    scanf("%d",&a);
  for(i=0;i<=a;i++)
  {
    for(j=0;j<i;j++)
    {
    printf("*");  
    }
    printf("\n");
  }
   
}

