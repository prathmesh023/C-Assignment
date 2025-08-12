//8th string without strlen

#include<stdio.h>
int main()
{
    char a[200];
    int i=0;

    printf("enter a string: ");
    scanf("%s",a);

    while(a[i]!='\0')
    {
        i++;
    }
    printf("lenth of string without strlen is:%d\n",i);
    return 0;
    
}