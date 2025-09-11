// array program of int array (integers and charaters,Strings) using input 

#include<stdio.h>
#include<string.h>

int main()

{
    int arr[5]={15,66,9,55,48};
    char arr2[5]={'h','i','j','k','l'};
    char arr3[5][20]={"Omkar","Krtik","Ravi","Prathm",""};
    
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
//  1st position of array is = 15
//  2nd position of array is = 66
//  3rd position of array is = 9
//  4th position of array is = 55
//  5th position of array is = 48
//  Array character Index
//  1st position of charaters = h
//  2nd position of charaters = i
//  3rd position of charaters = j
//  4th position of charaters = k
//  5th position of charaters = l
//  Array character Names
//  1st position of charaters Names = Omkar
//  2nd position of charaters Names = Krtik
//  3rd position of charaters Names = Ravi
//  4th position of charaters Names = Prathm
//  5th position of charaters Names = 