//to print a array program without user input

#include<stdio.h>
int main()
{
    int arr[5]={1,2,3,4,5};
    int i;

    printf("Array Elements: \n");
    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}