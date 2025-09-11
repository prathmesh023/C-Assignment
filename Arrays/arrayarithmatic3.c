// array program of int array using input And addition,subtraction,multiplication,division

#include<stdio.h>
int main()

{
    int arr[]={15,24,65,95,85};
    
    printf("Array Elements\n");

    printf("1st position = %d\n",arr[0]);
    printf("2nd position = %d\n",arr[1]);
    printf("3rd position = %d\n",arr[2]);
    printf("4th position = %d\n",arr[3]);
    printf("5th position = %d\n",arr[4]);

    printf("Arithmatic of array\n");

    printf("Addition of 1st and 2th position = %d\n",arr[0]+arr[1]);
    printf("Subtraction of 3rd and 4th position = %d\n",arr[2]-arr[3]);
    printf("Multiplication of 1st and 5th position = %d\n",arr[0]+arr[4]);
    printf("Subtraction of 3rd and 5th position = %d\n",arr[2]-arr[4]);

    return 0;
}


//  Output
//  Array Elements
//  1st position = 15
//  2nd position = 24
//  3rd position = 65
//  4th position = 95
//  5th position = 85
//  Arithmatic of array
//  Addition of 1st and 2th position = 39
//  Subtraction of 3rd and 4th position = -30
//  Multiplication of 1st and 5th position = 100
//  Subtraction of 3rd and 5th position = -20