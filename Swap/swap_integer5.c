//write a program to swap number using temp variable

#include<stdio.h>
int main()
{
    int A=54.88;
    int B=63.69;
    int temp;

    printf("\nBefore Swap: A = %d,B = %d\n",A,B);

    temp=A;
    A=B;
    B=temp;

    printf("\nAfter Swap: A = %d,B = %d\n\n",A,B);
   
return 0;

}