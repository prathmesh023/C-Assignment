// to print a string using string concatenation(strcat)

#include<stdio.h>
#include<string.h>
int main()
{
    char a[]="Prathmesh";
    char b[]=" Mirage";
    // add combine this one line
    printf("string a is:%s\n",a);
    printf("string b is:%s\n",b);
    strcat(a,b);
    printf("cat string a and b is:%s\n",a);

return 0;
}