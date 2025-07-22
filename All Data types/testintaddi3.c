#include<stdio.h>
int main()
{
  int testInteger1,testInteger2,testInteger3;
  
  printf("enter an integer:");
  scanf("%d",&testInteger1);
  
  printf("enter an another integer:");
  scanf("%d",&testInteger2);
  
  printf("enter an another integer 3:");
  scanf("%d",&testInteger3);
  
  printf("Number 1 = %d \n \n",testInteger1);
  printf("Number 2 = %d \n \n",testInteger2);
  printf("Number 3 = %d \n \n",testInteger3);
  
  printf("addition of this number is %d",testInteger1+testInteger2+testInteger3);
  
  return 0;
}
