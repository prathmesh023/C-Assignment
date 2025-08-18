//program of string function(strlwr)lower

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
    if(a[i] >='A' && a[i] <='Z')
    a[i]=a[i] +32;

    printf("\n STRING IN LOWERCASE IS: %s\n",a);

    return 0;

}

/*Enter a String: Prathmesh MIRAGE

 STRING IN LOWERCASE IS: prathmesh mirage*/
