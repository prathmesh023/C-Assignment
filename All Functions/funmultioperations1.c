//write i program for function in c. and perform multi operation using function
//Addition Subtraction Multiplication Division Minimum

#include<stdio.h>
#include<string.h>

void add();
void sub();
void multi();
void div();
void min();

int main()
{
    add();
    sub();
    multi();
    div();
    min();
    
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
    printf("Enter the first number here:");
    scanf("%d",&i);

    printf("Enter the second number here:");
    scanf("%d",&j);
    
    printf("the min number is =%d\n",(i<j)? i:j);
    
}


/*OUTPUT
--Addition Program Using Function--
Enter 1st num: 10
Enter 2nd num: 20
Addition of user input:30 

--Subtraction Program Using Function--
Enter 1st num: 10
Enter 2nd num: 20
Subtraction of user input:-10 

--Multiplication Program Using Function--
Enter 1st num: 10
Enter 2nd num: 20
Multiplication of user input:200 

--Division Program Using Function--
Enter 1st num: 10
Enter 2nd num: 20
Division of user input:0 

--Find Min Number--
Enter the first number here:10
Enter the second number here:20
the min number is =10  */