//7th natural number sum 

#include<stdio.h>
int main()
{
    int a;
    int b=0;

    for(a=0;a<=10;a++)
    {
        b=a+b;
    }
    printf("%d\n",b);

    return 0;
}
