#include <stdio.h>
#include <stdlib.h>
void sum(int,int);
int main() 
{
  int a,b;
  printf("enter the value :\n");
  scanf("%d%d",&a,&b);
    sum(a,b);
  
  return EXIT_SUCCESS;
}
void sum(int num1,int num2)
{
  int result;
  result=num1+num2;
  printf("the resut is : %d",result);
}


