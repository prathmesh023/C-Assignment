//to print a string using (strcmp)string compare

#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    char b[100];

    printf("ENTER STRING A:");
    scanf("%s",a);

    printf("ENTER STRING B:");
    scanf("%s",b);

    int result = strcmp(a,b);

    printf("%s %s\n",a,b);

 return 0;

}