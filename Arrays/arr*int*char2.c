// array program of int array (integers and charaters) using input 

#include<stdio.h>
#include<string.h>

int main()

{
    int arr[5]={15,25,30,49,59};
    char arr2[5]={'E','F','G','H','I'};
    
    printf("Array Integers Elements\n");

    printf("1st position of array is = %d\n",arr[0]);
    printf("2nd position of array is = %d\n",arr[1]);
    printf("3rd position of array is = %d\n",arr[2]);
    printf("4th position of array is = %d\n",arr[3]);
    printf("5th position of array is = %d\n",arr[4]);

    printf("Array character Index\n");

    printf("1st position of charaters = %c\n",arr2[0]);
    printf("2nd position of charaters = %c\n",arr2[1]);
    printf("3rd position of charaters = %c\n",arr2[2]);
    printf("4th position of charaters = %c\n",arr2[3]);
    printf("5th position of charaters = %c\n",arr2[4]);

    return 0;
}

//  Output
//  Array Integers Elements
//  1st position of array is = 15
//  2nd position of array is = 25
//  3rd position of array is = 30
//  4th position of array is = 49
//  5th position of array is = 59
//  Array character Index
//  1st position of charaters = E
//  2nd position of charaters = F
//  3rd position of charaters = G
//  4th position of charaters = H
//  5th position of charaters = I