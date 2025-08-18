//to print a string using (strcmp)string compare

#include<stdio.h>
#include<string.h>
int main()
{
    char a[]= "Good";
    char b[]= "morning";

    int result = strcmp(a,b);

    printf("%s %s\n",a,b);

 return 0;

}