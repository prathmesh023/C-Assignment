//Assignment 31/07 1st addition program using function

#include <stdio.h>
int add(int a,int b)
{
    return a+b;
}

int main()
{
    int num1=55;
    int num2=46;
    int result;
    
    printf("num1:%d\n",num1);
    printf("num2:%d\n",num2);

    printf("Addition=%d\n",add(num1,num2));

    return 0;
}