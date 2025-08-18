//program of string function(strupr)upper case

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char upr[100];
    int i;

    printf("Enter a String: ");
   fgets(str,sizeof(str),stdin);
    // create a upper copy of string

    strcpy(upr,str);
    for(i=0;upr[i] !='\0';i++)
    if(upr[i] >='a' && upr[i] <='z')
    upr[i]=upr[i] -32;

    //to check output string

    printf("\n STRING IN UPPERCASE IS: %s\n",upr);

    return 0;

}

/*Enter a String: prathmesh

 STRING IN UPPERCASE IS: PRATHMESH */
