#include <stdio.h>
#include <stdlib.h>
void sum();
int main() 
{
  sum();
  sum();
  return EXIT_SUCCESS;
}
void sum()
{
  int num1,num2,sum;
  printf("enter the numbers : \n");
  scanf("%d%d",&num1,&num2);
  sum=num1+num2;
  printf("%d",sum);
  
}
 

