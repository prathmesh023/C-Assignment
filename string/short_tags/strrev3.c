//to print a string using (strrev)charater reverse
//19-8-25

#include<stdio.h>
#include<string.h>
int main()
{
    char str[100],rev[100];
    int i1,len;
    

    printf("Enter your string: ");
    fgets(str,sizeof(str),stdin);
    
    strcpy(rev,str);
    len=strlen(rev);
    for(i1=0;i1<len/2;i1++)
   {
        char temp = rev[i1];
        rev[i1] = rev[len - i1 - 1];
        rev[len - i1 - 1] = temp;
    }
    printf("the reverse string is: %s",rev);

    return 0;
}



/*Output:-
Enter your string: Prathmesh
the reverse string is: hsemhtarP  */