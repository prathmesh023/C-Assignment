//write a program to swap number using temp variable

#include<stdio.h>
int main()
{
    int num1=2894;
    int num2=2563;
    int temp;

    printf("\nBefore Swap: num1 = %d,num2 = %d\n",num1,num2);

    temp=num1;
    num1=num2;
    num2=temp;

    printf("\nAfter Swap: num1 = %d,num2 = %d\n\n",num1,num2);
   
return 0;

}