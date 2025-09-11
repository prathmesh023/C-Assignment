// array program of int array (integers and charaters,Strings) using input 

#include<stdio.h>
#include<string.h>

int main()

{
    int arr[5]={10,20,30,40,50};
    char arr2[5]={'A','B','C','D','E'};
    char arr3[5][20]={"Prathmesh","Omkar","Karan","Rahul","Pratik"};
    
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
//  1st position of array is = 10
//  2nd position of array is = 20
//  3rd position of array is = 30
//  4th position of array is = 40
//  5th position of array is = 50
//  Array character Index
//  1st position of charaters = A
//  2nd position of charaters = B
//  3rd position of charaters = C
//  4th position of charaters = D
//  5th position of charaters = E
//  Array character Names
//  1st position of charaters Names = Prathmesh
//  2nd position of charaters Names = Omkar
//  3rd position of charaters Names = Karan
//  4th position of charaters Names = Rahul
//  5th position of charaters Names = Pratik