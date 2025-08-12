//Assignment 31/07 3rd even number

#include<stdio.h>
int main()
{
    int a;
    printf("\nEnter a number:");
    scanf("%d",&a);

    if(a%2==0)
    {
        printf("\nyour number is even number\n");
    }
    else
    {
        printf("\nyour number is not even number\n");
    }
    return 0;
}