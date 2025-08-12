// to print a string using string concatenation(strcat)

#include<stdio.h>
#include<string.h>
int main()
{
    char x[]="c-";
    char y[]=" Programming";
    // add combine this one line
    printf("string x is:%s\n",x);
    printf("string y is:%s\n",y);
    strcat(x,y);
    printf("cat string x and y is:%s\n",x);

return 0;
}