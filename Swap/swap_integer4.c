//write a program to swap number using temp variable

#include<stdio.h>
int main()
{
    int No1=5684;
    int No2=6943;
    int temp;

    printf("\nBefore Swap: No1 = %d,No2 = %d\n",No1,No2);

    temp=No1;
    No1=No2;
    No2=temp;

    printf("\nAfter Swap: No1 = %d,No2 = %d\n\n",No1,No2);
   
return 0;

}