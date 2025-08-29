//write i program for function in c. and perform multi operation using function
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

/*Output
--Addition Program Using Function--
Enter 1st num: 10
Enter 2nd num: 20
Addition of user input:30

--Subtraction Program Using Function--
Enter 1st num: 20
Enter 2nd num: 30
Subtraction of user input:-10 

--Multiplication Program Using Function--
Enter 1st num: 5
Enter 2nd num: 6
Multiplication of user input:30

--Division Program Using Function--
Enter 1st num: 6
Enter 2nd num: 2
Division of user input:3  */