//to print a string using (strrev)charater reverse

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],rev[100];
    int A,L;
    

    printf("Enter your string: ");
    fgets(str,sizeof(str),stdin);
    
    strcpy(rev,str);//copy string into reverse
    L=strlen(rev);
    for(A=0;A<L/2;A++)
   {
        char temp = rev[A];
        rev[A] = rev[L - A - 1];
        rev[L - A - 1] = temp;
    }
    printf("the reverse string is: %s",rev);

    return 0;
}