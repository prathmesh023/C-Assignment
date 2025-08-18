//program of string function(strupr)upper case

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char u[100];
    int i;

    printf("Enter a String: ");
   fgets(str,sizeof(str),stdin);
    // create a upper copy of string

    strcpy(u,str);
    for(i=0;u[i] !='\0';i++)
    if(u[i] >='a' && u[i] <='z')
    u[i]=u[i] -32;

    //to check output string

    printf("\n STRING IN UPPERCASE IS: %s\n",u);

    return 0;

}

/*Enter a String: Prathmesh MIRAGE

 STRING IN UPPERCASE IS: PRATHMESH MIRAGE*/
