//to print a string using string length(strlen)

#include<stdio.h>
#include<string.h>

int main()
{
    char a[]="Prathmesh";
    char b[]="Mirage";
    int c=strlen(a);
    int d=strlen(b);

    printf("This is length of A=Prathmesh\n");
    printf("Length of string is:%d\n",c);
    printf("--------------------------------\n");
    printf("This is length of B=Mirage\n");
    printf("Length of string is:%d\n",d);

    return 0;
}