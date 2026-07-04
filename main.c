#include <stdio.h>
#include <stdlib.h>
int main() 
{
  int a[5],i;
  printf("Enter the values :\n");
  for(i=0;i<5;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Entered values are :  ");
  for(i=0;i<5;i++)
  {
    printf("%d \t",a[i]);
   } 

}

