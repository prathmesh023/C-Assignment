//program of string function(strlwr,strupr)

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char L[100];
    char U[100];
    int i;

    printf("Enter a String: ");
    fgets(str,sizeof(str),stdin);

    // create a lower copy of string

    strcpy(L,str);
    for(i=0;L[i] !='\0';i++)
    if(L[i] >='A' && L[i] <='Z')
    L[i]=L[i] +32;

    // create a upper copy of string

    strcpy(U,str);
    for(i=0;U[i] !='\0';i++)
    if(U[i] >='a' && U[i] <='z')
    U[i]=U[i] -32;

    //to check output string

    printf("\n STRING IN LOWERCASE IS: %s\n",L);

    printf("\n STRING IN UPPERCASE IS: %s\n",U);

}


/*Enter a String: YOU can Do iT.

 STRING IN LOWERCASE IS: you can do it.


 STRING IN UPPERCASE IS: YOU CAN DO IT */