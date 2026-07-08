#include <stdio.h>
#include <stdlib.h>
int main() 
{
  int i,j,value[3][3];
  printf("enter the values :\n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      scanf("%d",&value[i][j]);
    }
    
  }
  printf("the entered numbers are: \n");
  for(i=0;i<3;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("%d\t",value[i][j]);
    }
    printf("\n");
  }
}
 

