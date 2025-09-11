// array program of int array using input and addition

#include<stdio.h>
int main()

{
    int arr[]={10,25,05,45,85};
    
    printf("Array Elements\n");

    printf("1st position = %d\n",arr[0]);
    printf("2nd position = %d\n",arr[1]);
    printf("3rd position = %d\n",arr[2]);
    printf("4th position = %d\n",arr[3]);
    printf("5th position = %d\n",arr[4]);

    printf("Arithmatic of array\n");

    printf("Addition of 1st and 2th position = %d\n",arr[0]+arr[1]);

    return 0;
}

//  Output
//  Array Elements
//  1st position = 10
//  2nd position = 25
//  3rd position = 5
//  4th position = 45
//  5th position = 85
//  Arithmatic of array
//  Addition of 1st and 4th position = 35