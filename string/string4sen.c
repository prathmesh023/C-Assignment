// write program String use user input(only sentens print) by fgets

#include<stdio.h>
#include<string.h>
 
int main()
{

    char str[1000];
    printf("Enter string:");
    fgets(str,sizeof(str),stdin);
    printf("your entered message: %s\n",str);
    return 0;
}
