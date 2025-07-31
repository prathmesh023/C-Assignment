//write a program addition subtract to swap number using temp variable

#include<stdio.h>
int main()
{
    int A=25.50;
    int B=38.30;
    int temp;

    printf("\nBefore Swap: A = %d,B = %d\n",A,B);

    A = A+B;    //(a25.50+b38.30)
    B = A-B;    
    A = A-B;    

    printf("\nAfter Swap: A = %d,B = %d\n\n",A,B);
   
return 0;

}