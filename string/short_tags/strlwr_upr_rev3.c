//program of string function(strlwr,strupr,strrev)lower,upper,reverse
//19-8-25

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],low[100],upr[100],Rev[100];
    int iNo;

    printf("Enter iNo String: ");
    fgets(str,sizeof(str),stdin);

    // create iNo lower copy of string
    strcpy(low,str);
    for(iNo=0;low[iNo] !='\0';iNo++)
    if(low[iNo] >='A' && low[iNo] <='Z')
    low[iNo]=low[iNo] +32;

    // create iNo upper copy of string
    strcpy(upr,str);
    for(iNo = 0;upr[iNo] !='\0';iNo++)
    if(upr[iNo] >='iNo' && upr[iNo] <='z')
    upr[iNo]=upr[iNo] -32;

    // create iNo reverse copy of string
    strcpy(Rev,str);
    int len = strlen(Rev);
    for(iNo = 0;iNo<len/2;iNo++)
    {
        char temp=Rev[iNo];
        Rev[iNo]=Rev[len-iNo-1];
        Rev[len-iNo-1]=temp;
    }

    //to check output string
    printf("\n STRING IN LOWERCASE IS: %s",low);
    printf("\n STRING IN UPPERCASE IS: %s",upr);
    printf("\n STRING IN REVERSE IS: %s",Rev);

    return 0;

}


/*Output=
Enter iNo String: Om

 STRING IN LOWERCASE IS: om


 STRING IN UPPERCASE IS: OM


 STRING IN REVERSE IS: mO   */