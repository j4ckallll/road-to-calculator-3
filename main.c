#include <stdio.h>
#include <stdlib.h>
int main() 
{
  int limit,arr[1000],i,search,flag=0,j,temp;
  printf("Enter the the limit :");
  scanf("%d",&limit);
   printf("enter the value :\n" );
  for (i=0;i<limit;i++)
  {
    scanf("%d", &arr[i]);
  }
  for(i=0;i<limit-1;i++)
  {
    for(j=i+1;j<limit;j++)
    {
      if(arr[i]>arr[j])
      {
      temp=arr[j];
      arr[j]=arr[i];
      arr[i]=temp;
      } 
    }
  }
  printf("sorted value :\n");
  for(i=0;i<limit;i++)
  {
  printf(" %d\t",arr[i]);
  }
  
}

