//write a program for function in c. and perform multi operation using function
//Addition Subtraction Multiplication

#include<stdio.h>
#include<string.h>

void add();
void sub();
void multi();

int main()
{
    add();
    sub();
    multi();

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

/*Output
--Addition Program Using Function--
Enter 1st num: 12
Enter 2nd num: 10
Addition of user input:22 

--Subtraction Program Using Function--
Enter 1st num: 32
Enter 2nd num: 31
Subtraction of user input:1 

--Multiplication Program Using Function--
Enter 1st num: 24
Enter 2nd num: 12
Multiplication of user input:288 */