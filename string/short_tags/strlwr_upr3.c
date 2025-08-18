//program of string function(strlwr,strupr)

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char LOW[100];
    char UPP[100];
    int i;

    printf("Enter a String: ");
    fgets(str,sizeof(str),stdin);

    strcpy(LOW,str);
    for(i=0;LOW[i] !='\0';i++)
    if(LOW[i] >='A' && LOW[i] <='Z')
    LOW[i]=LOW[i] +32;

    strcpy(UPP,str);
    for(i=0;UPP[i] !='\0';i++)
    if(UPP[i] >='a' && UPP[i] <='z')
    UPP[i]=UPP[i] -32;

    printf("\n STRING IN LOWERCASE IS: %s\n",LOW);
    printf("\n STRING IN UPPERCASE IS: %s\n",UPP);

}


/*Enter a String: Prathmesh Mirage

 STRING IN LOWERCASE IS: prathmesh mirage


 STRING IN UPPERCASE IS: PRATHMESH MIRAGE */