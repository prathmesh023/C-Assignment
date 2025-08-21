//program of string function(strlwr,strupr,strrev)
//19-8-25

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],L[100],U[100],Rev[100];
    int a;

    printf("Enter a String: ");
    fgets(str,sizeof(str),stdin);

    // create a lower copy of string
    strcpy(L,str);
    for(a=0;L[a] !='\0';a++)
    if(L[a] >='A' && L[a] <='Z')
    L[a]=L[a] +32;

    // create a upper copy of string
    strcpy(U,str);
    for(a = 0;U[a] !='\0';a++)
    if(U[a] >='a' && U[a] <='z')
    U[a]=U[a] -32;

    // create a reverse copy of string
    strcpy(Rev,str);
    int len = strlen(Rev);
    for(a = 0;a<len/2;a++)
    {
        char temp=Rev[a];
        Rev[a]=Rev[len-a-1];
        Rev[len-a-1]=temp;
    }

    //to check output string
    printf("\n STRING IN LOWERCASE IS: %s",L);
    printf("\n STRING IN UPPERCASE IS: %s",U);
    printf("\n STRING IN REVERSE IS: %s",Rev);

    return 0;

}


/*Output=
Enter a String: Hello..

 STRING IN LOWERCASE IS: hello..


 STRING IN UPPERCASE IS: Hello..


 STRING IN REVERSE IS: ..olleH   */