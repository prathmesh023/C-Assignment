//write a program addition subtract to swap number using temp variable by  user input

#include<stdio.h>
int main()
{
    int A;
    int B;
    int temp;

    printf("Enter number of A= \n",A);
    scanf("%d",&A);
    
    printf("Enter number of B= \n",B);
    scanf("%d",&B);

     printf("\nBefore Swap: A = %d,B = %d\n",A,B);

    A = A+B;    //(a25.50+b38.30)
    B = A-B;    
    A = A-B;    

    printf("\nAfter Swap: A = %d,B = %d\n\n",A,B);
   
return 0;

}