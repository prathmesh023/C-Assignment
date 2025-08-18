//program of string function(strlwr)lower

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char L[100];
    int i;

    printf("Enter a String: ");
   fgets(str,sizeof(str),stdin);
    // create a lower copy of string

    strcpy(L,str);
    for(i=0;L[i] !='\0';i++)
    if(L[i] >='A' && L[i] <='Z')
    L[i]=L[i] +32;

    //to check output string

    printf("\n STRING IN LOWERCASE IS: %s\n",L);

    return 0;

}

/*Enter a String: HOW 

 STRING IN LOWERCASE IS: how */
