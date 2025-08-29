//write i program for function in c. and perform multi operation using function
//Addition Subtraction Multiplication Division Minimum Maxnum

#include<stdio.h>
#include<string.h>

void add();
void sub();
void multi();
void div();
void min();
void max();

int main()
{
    add();
    sub();
    multi();
    div();
    min();
    max();
    
    return 0;
}
//addition program using function
void add()
{

    int i,j;

    printf("--Addition Program Using Function--\n");
    printf("Enter 1st num: ");
    scanf("%d",&i);
    printf("Enter 2nd num: ");
    scanf("%d",&j);

    printf("Addition of user input:%d \n",i+j);
    

}

//subtraction program using function
void sub()
{
    int  i,j;

    printf("\n--Subtraction Program Using Function--\n");
    printf("Enter 1st num: ");
    scanf("%d",&i);
    printf("Enter 2nd num: ");
    scanf("%d",&j);

    printf("Subtraction of user input:%d \n",i-j);
    

}

//multiplication program using function
void multi()
{
    int  i,j;

    printf("\n--Multiplication Program Using Function--\n");
    printf("Enter 1st num: ");
    scanf("%d",&i);
    printf("Enter 2nd num: ");
    scanf("%d",&j);

    printf("Multiplication of user input:%d \n",i*j);
    

}

//Division program using function
void div()
{
    int  i,j;

    printf("\n--Division Program Using Function--\n");
    printf("Enter 1st num: ");
    scanf("%d",&i);
    printf("Enter 2nd num: ");
    scanf("%d",&j);

    printf("Division of user input:%d \n",i/j);
    

}

//min number program using function
void min()
{
    int i,j;
    
    printf("\n--Find Min Number--\n");
    printf("Enter the 1st number :");
    scanf("%d",&i);

    printf("Enter the 2nd number :");
    scanf("%d",&j);
    
    printf("the min number is: %d\n",(i<j)? i:j);
    
}

//max number program using function
void max()
{
    int i,j;
    
    printf("\n--Find Max Number--\n");
    printf("Enter the 1st number :");
    scanf("%d",&i);

    printf("Enter the 2nd number  :");
    scanf("%d",&j);
    
    printf("the max number is: %d\n",(i>j)? i:j);
    
}

/*OUTPUT
--Addition Program Using Function--
Enter 1st num: 20
Enter 2nd num: 30
Addition of user input:50 

--Subtraction Program Using Function--
Enter 1st num: 60
Enter 2nd num: 50
Subtraction of user input:10 

--Multiplication Program Using Function--
Enter 1st num: 40
Enter 2nd num: 80
Multiplication of user input:3200 

--Division Program Using Function--
Enter 1st num: 90
Enter 2nd num: 70
Division of user input:1 

--Find Min Number--
Enter the 1st number :80
Enter the 2nd number :50
the min number is: 50

--Find Max Number--
Enter the 1st number :60
Enter the 2nd number  :40
the max number is: 60  */

