//program of string function(strlwr,strupr)

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char lwr[100];
    char upr[100];
    int i;

    printf("Enter a String: ");
    fgets(str,sizeof(str),stdin);

    // create a lower copy of string

    strcpy(lwr,str);
    for(i=0;lwr[i] !='\0';i++)
    if(lwr[i] >='A' && lwr[i] <='Z')
    lwr[i]=lwr[i] +32;

    // create a upper copy of string

    strcpy(upr,str);
    for(i=0;upr[i] !='\0';i++)
    if(upr[i] >='a' && upr[i] <='z')
    upr[i]=upr[i] -32;

    //to check output string

    printf("\n STRING IN LOWERCASE IS: %s\n",lwr);
    printf("\n STRING IN UPPERCASE IS: %s\n",upr);

}