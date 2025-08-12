//4th swap

#include<stdio.h>
int main()
{
    int a=88;
    int b=96;
    int temp;

    printf("befor swaping: a:%d,b:%d\n",a,b);
    
    temp=a;
    a=b;
    b=temp;

    printf("after swaping: a:%d,b:%d\n",a,b);

    return 0;
    
}