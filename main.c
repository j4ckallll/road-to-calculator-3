#include <stdio.h>
#include <stdlib.h>
int main() 
{
  int limit,arr[1000],i,search,flag=0;
  printf("Enter the the limit :");
  scanf("%d",&limit);
   printf("enter the value :\n" );
  for (i=0;i<limit;i++)
  {
    scanf("%d", &arr[i]);
  }
  printf("please enter the searchkey :");
  scanf("%d",&search);
  for(i=0;i<limit;i++)
  {
    if(search==arr[i])
    {
      printf("The number exists in %d",i+1);
      flag=1;
      break;
    }
  }
  if(flag==0)
  {
    printf("The value dosent exists");
  }
  
}

