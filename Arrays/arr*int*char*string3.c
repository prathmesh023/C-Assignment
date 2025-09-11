// array program of int array (integers and charaters,Strings) using input 

#include<stdio.h>
#include<string.h>
int main()

{
    int arr[5]={5,6,9,7,8};
    char arr2[5]={'a','b','c','d','e'};
    char arr3[5][20]={"Om","Rutvik","Ravndra","Parth","Manish"};
    
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

    printf("Array character Names\n");

    printf("1st position of charaters Names = %s\n",arr3[0]);
    printf("2nd position of charaters Names = %s\n",arr3[1]);
    printf("3rd position of charaters Names = %s\n",arr3[2]);
    printf("4th position of charaters Names = %s\n",arr3[3]);
    printf("5th position of charaters Names = %s\n",arr3[4]);
    return 0;
}

//  Output
//  Array Integers Elements
//  1st position of array is = 5
//  2nd position of array is = 6
//  3rd position of array is = 9
//  4th position of array is = 7
//  5th position of array is = 8
//  Array character Index
//  1st position of charaters = a
//  2nd position of charaters = b
//  3rd position of charaters = c
//  4th position of charaters = d
//  5th position of charaters = e
//  Array character Names
//  1st position of charaters Names = Om
//  2nd position of charaters Names = Rutvik
//  3rd position of charaters Names = Ravndra
//  4th position of charaters Names = Parth
//  5th position of charaters Names = Manish