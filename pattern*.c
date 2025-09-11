// Pattern code in c by using user input

#include<stdio.h>
int main()
{
    int i,j,k;

    printf("ENTER A NUMBER OF ROWS: ");
    scanf("%d",&k);

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
//ENTER A NUMBER OF ROWS: 5
//* 
//* * 
//* * * 
//* * * * 
//* * * * * 