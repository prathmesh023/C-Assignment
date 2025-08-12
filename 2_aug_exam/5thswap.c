//5th swap with out 3rd

#include<stdio.h>
int main()
{
    int a=85;
    int b=90;

    printf("befor swaping: a:%d,b:%d\n",a,b);
    
    a=a;
    a=b;
    b=b;

    printf("after swaping: a:%d,b:%d\n",a,b);

    return 0;
    
}