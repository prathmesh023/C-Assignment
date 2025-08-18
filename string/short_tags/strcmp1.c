//to print a string using (strcmp)string compare

#include<stdio.h>
#include<string.h>
int main()
{
    char a[]= "Good";
    char b[]= "morning";

    int result = strcmp(a,b);

    if (result == 0)
    {
       printf("string are equal\n");
    }
    else
    {
       printf("string are not equal\n");
    }
 return 0;

}