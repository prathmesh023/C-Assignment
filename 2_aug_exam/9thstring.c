//9th string using fgets

#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];

    printf("enter your string: ");
    fgets(a,sizeof(a),stdin);
    printf("string is: %s\n",a);
    return 0;
}