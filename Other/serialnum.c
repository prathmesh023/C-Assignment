//Assignment 31/07 10th number serial print 

#include<stdio.h>
void printserial(int a)
{
    for(int i=1;i<= a;i++)
    {
        printf("%d\n",i);
    
    }
}
    int main()
        {
            int a;
            printf("enter number: ");
            scanf("%d",&a);
            printserial(a);
            
            return 0;
        }
