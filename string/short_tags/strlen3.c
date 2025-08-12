//to print a string using string length(strlen)

#include<stdio.h>
#include<string.h>

int main()
{
    char a[]="Prathmesh Mirage";
    int b=strlen(a);

    printf("%s\n",a);
    printf("Length of upper name is:%d\n",b);

    return 0;
}