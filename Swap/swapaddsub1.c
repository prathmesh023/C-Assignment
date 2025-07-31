//write a program to swap number addmision subtraction using temp variable

#include<stdio.h>
int main()
{
    int A=20;
    int B=30;
    int temp;

    printf("\nBefore Swap: A = %d,B = %d\n",A,B);

    A = A+B;    //(a20+b30 =50) a=50
    B = A-B;    //50-30 = b=20
    A = A-B;    //50-20 = a=30

    printf("\nAfter Swap: A = %d,B = %d\n\n",A,B);
   
return 0;

}