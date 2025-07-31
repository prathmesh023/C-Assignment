//write a program to swap number using temp variable

#include<stdio.h>
int main()
{
    int a=234;
    int b=233;
    int temp;

    printf("\nBefore Swap: a=%d,b=%d\n",a,b);

    temp=a;
    a=b;
    b=temp;

    printf("\nAfter Swap: a=%d,b=%d\n\n",a,b);
   
return 0;

}
