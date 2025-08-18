//total ascii value in one program

#include<stdio.h>
int main()
{
    int i;

    for(i=33;i<128;i++)
    {
        printf("Charater:%c  ASCII value:%d\n",i,i);
     
    }

    return 0;
}