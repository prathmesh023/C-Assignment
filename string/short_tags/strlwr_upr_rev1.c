//program of string function(strlwr,strupr,strrev)
//19-8-25

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char lwr[100];
    char upr[100];
    char rev[100];
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
    for(i = 0;upr[i] !='\0';i++)
    if(upr[i] >='a' && upr[i] <='z')
    upr[i]=upr[i] -32;

    // create a reverse copy of string
    strcpy(rev,str);
    int len = strlen(rev);
    for(i = 0;i<len/2;i++)
    {
        char temp=rev[i];
        rev[i]=rev[len-i-1];
        rev[len-i-1]=temp;
    }

    //to check output string
    printf("\n STRING IN LOWERCASE IS: %s",lwr);
    printf("\n STRING IN UPPERCASE IS: %s",upr);
    printf("\n STRING IN REVERSE IS: %s",rev);

    return 0;

}


/*Output=
Enter a String: Hi how are YOU?

 STRING IN LOWERCASE IS: hi how are you?


 STRING IN UPPERCASE IS: HI HOW ARE YOU?


 STRING IN REVERSE IS: ?UOY era woh iH    */