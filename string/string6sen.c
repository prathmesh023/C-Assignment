// write program String use user input(only sentens print) by fgets

#include<stdio.h>
#include<string.h>

int main()
{

    char A[3000];
    printf("Enter your string: ");
    fgets(A,sizeof(A),stdin);
    printf("This is your message: %s",A);

    return 0;
}