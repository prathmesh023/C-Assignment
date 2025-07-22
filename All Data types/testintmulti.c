#include<stdio.h>
int main()
{
  int testInteger1,testInteger2;
  
  printf("enter an integer:");
  scanf("%d",&testInteger1);
  
  printf("enter an another integer:");
  scanf("%d",&testInteger2);
  
  printf("Number 1 = %d \n \n",testInteger1);
  printf("Number 2 = %d \n \n",testInteger2);
  
  printf("Multiplication of this number is %d",testInteger1*testInteger2);
  
  return 0;
}
