// write program String use user input(only sentens print) by fgets

#include<stdio.h>
#include<string.h>

int main()
{
    char str[200];
    
    printf("enter a string:");
    fgets(str,sizeof(str),stdin);
    printf("this is your message: %s",str);

    return 0;
}