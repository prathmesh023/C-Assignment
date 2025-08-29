//write a program for function in c. and perform multi operation using function
//Addition Subtraction Multiplication Division

#include<stdio.h>
#include<string.h>

void add();
void sub();
void multi();
void div();

int main()
{
    add();
    sub();
    multi();
    div();
    
    return 0;
}
//addition program using function
void add()
{

    int a,b;

    printf("--Addition Program Using Function--\n");
    printf("Enter 1st num: ");
    scanf("%d",&a);
    printf("Enter 2nd num: ");
    scanf("%d",&b);

    printf("Addition of user input:%d \n",a+b);
    

}

//subtraction program using function
void sub()
{
    int  a,b;

    printf("\n--Subtraction Program Using Function--\n");
    printf("Enter 1st num: ");
    scanf("%d",&a);
    printf("Enter 2nd num: ");
    scanf("%d",&b);

    printf("Subtraction of user input:%d \n",a-b);
    

}

//multiplication program using function
void multi()
{
    int  a,b;

    printf("\n--Multiplication Program Using Function--\n");
    printf("Enter 1st num: ");
    scanf("%d",&a);
    printf("Enter 2nd num: ");
    scanf("%d",&b);

    printf("Multiplication of user input:%d \n",a*b);
    

}

//Division program using function
void div()
{
    int  a,b;

    printf("\n--Division Program Using Function--\n");
    printf("Enter 1st num: ");
    scanf("%d",&a);
    printf("Enter 2nd num: ");
    scanf("%d",&b);

    printf("Division of user input:%d \n",a/b);
    

}

/*Output
--Addition Program Using Function--
Enter 1st num: 10
Enter 2nd num: 10
Addition of user input:20 

--Subtraction Program Using Function--
Enter 1st num: 20
Enter 2nd num: 30
Subtraction of user input:-10 

--Multiplication Program Using Function--
Enter 1st num: 50
Enter 2nd num: 60
Multiplication of user input:3000 

--Division Program Using Function--
Enter 1st num: 60
Enter 2nd num: 2
Division of user input:30 */