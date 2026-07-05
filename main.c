#include <stdio.h>
#include <stdlib.h>
int main() 
{
  int limit,arr[10000],i,sum=0;
  printf("enter the limiit :");
  scanf("%d",&limit);
  printf("enter the values :\n");
  for(i=0;i<limit;i++)
  {
    scanf("%d",&arr[i]);
  }
  for(i=0;i<limit;i++)
  {
    sum = sum + arr[i];
  }
  printf("result : %d",sum);
  
}

