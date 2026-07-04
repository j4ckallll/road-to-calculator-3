#include <stdio.h>
#include <stdlib.h>
int main() 
{
  int a[10000],i;
  int limit;
  printf("Enter array limit : ");
  scanf("%d",&limit);
  printf("enter the values to store in array :\n");
  for(i=0;i<limit;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Entered values are :  ");
  for(i=0;i<limit;i++)
  {
    printf("%d \t",a[i]);
   } 

}

