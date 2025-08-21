//to write a program of string(strcspn)complement span
//19-8-2025

#include<stdio.h>
#include<string.h>
int main()

{
    char str[100];

    printf("Enter your name : ");
    fgets(str,sizeof(str), stdin);

    //Remove newline
    str[strcspn(str,"\n")] = '\0';

    printf("Your name is: %s\n", str);

return 0;
}

/*OUTPUT=
Enter your name : Prathmesh             
Your name is: Prathmesh*/