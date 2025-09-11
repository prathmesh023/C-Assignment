// Pattern code in c by using input

#include<stdio.h>
int main()
{
    int i,j;
    int k=5;

    printf("NUMBER OF ROWS is:%d\n",k);

    for(i=1;i<=k;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}


//Output:-
//NUMBER OF ROWS is: 5
//* 
//* * 
//* * * 
//* * * * 
//* * * * * 