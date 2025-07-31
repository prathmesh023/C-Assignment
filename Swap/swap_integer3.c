//write a program to swap number using temp variable

#include<stdio.h>
int main()
{
    int N1=28;
    int N2=63;
    int temp;

    printf("\nBefore Swap: N1 = %d,N2 = %d\n",N1,N2);

    temp=N1;
    N1=N2;
    N2=temp;

    printf("\nAfter Swap: N1 = %d,N2 = %d\n\n",N1,N2);
   
return 0;

}