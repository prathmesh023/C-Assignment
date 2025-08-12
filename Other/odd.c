//Assignment 31/07 4th odd number

#include<stdio.h>
int main()
{
    int x;
    printf("\nEnter a number:");
    scanf("%d",&x);

    if(x%2!=0)
    {
        printf("\nyour number is odd number\n");
    }
    else
    {
        printf("\nyour number is not odd number\n");
    }
    return 0;
}