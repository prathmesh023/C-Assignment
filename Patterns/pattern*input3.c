// Pattern code in c by using input

#include<stdio.h>
int main()
{
    int a,b;
    int c = 10;

    printf("NUMBER OF ROWS is:%d\n",c);

    for(a=1;a<=c;a++)
    {
        for(b=1;b<=a;b++)
        {
            printf("# ");
        }
        printf("\n");
    }
    return 0;
}


//  Output =
//  NUMBER OF ROWS is:10
//  # 
//  # # 
//  # # # 
//  # # # # 
//  # # # # # 
//  # # # # # # 
//  # # # # # # # 
//  # # # # # # # # 
//  # # # # # # # # # 
//  # # # # # # # # # # 
