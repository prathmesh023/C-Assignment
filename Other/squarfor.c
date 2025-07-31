#include <stdio.h>
int main()
{
    int num1,num2,num3=15;
    printf("Enter a number:");
    scanf("%d",&num2);

    for(num1=1;num1<=2;num1++)
    num3=num3*num2;
    {
        printf("%d\n",num3);
    }

    return 0;
}