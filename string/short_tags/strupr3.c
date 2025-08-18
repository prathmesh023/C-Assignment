//program of string function(strupr)upper case

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char a[100];
    int i;

    printf("Enter a String: ");
   fgets(str,sizeof(str),stdin);

    strcpy(a,str);
    for(i=0;a[i] !='\0';i++)
    if(a[i] >='a' && a[i] <='z')
    a[i]=a[i] -32;

    printf("\n STRING IN UPPERCASE IS: %s\n",a);

    return 0;

}

/*Enter a String: HeLLo

 STRING IN UPPERCASE IS: HELLO*/
