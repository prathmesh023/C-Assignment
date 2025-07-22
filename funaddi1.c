// to print of addition functions by inputs

#include <stdio.h>
int add(int a,int b)
{
    printf("this is addition function\n");
    printf("value a=%d\n",a);
    printf("value b=%d\n",b);

    return a+b;
}

int main()
{
    int num1=55;
    int num2=46;
    int result;
    
    printf("This is main function\n");
    printf("Add=%d\n",add(num1,num2));

    return 0;
}