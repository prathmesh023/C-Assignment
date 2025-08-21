//to print a string using (strrev)charater reverse

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],reverse[100];
    int i,len;
    

    printf("Enter your string: ");
    fgets(str,sizeof(str),stdin);
    
   // str[strcspn(str,"\n")] = '\0';// remove new line
    strcpy(reverse,str);//copy string into reverse
    len=strlen(reverse);
    for(i=0;i<len/2;i++)
   {
        char temp = reverse[i];
        reverse[i] = reverse[len - i - 1];
        reverse[len - i - 1] = temp;
    }
    printf("the reverse string is: %s",reverse);

    return 0;
}