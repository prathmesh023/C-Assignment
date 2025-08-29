//write i program for function in c. and perform multi operation using function
//Addition Subtraction Multiplication Division Minimum Maxnum Loop

#include<stdio.h>
#include<string.h>

void add();
void sub();
void multi();
void div();
void min();
void max();
void loop1();

int main()
{
    add();
    sub();
    multi();
    div();
    min();
    max();
    loop1();
    
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

//loop using function
void  loop1()
{
    int i;

    printf("\n--Print A Number Using Loop--\n");
    for(int i = 1;i <= 5;i++) //start loop from 1 to 5
    {
        printf("Print the number of 1 to 5 = %d \n",i);
    }

}

/*OUTPUT:
--Addition Program Using Function--
Enter 1st num: 1
Enter 2nd num: 5
Addition of user input:6 

--Subtraction Program Using Function--
Enter 1st num: 1
Enter 2nd num: 5
Subtraction of user input:-4 

--Multiplication Program Using Function--
Enter 1st num: 1
Enter 2nd num: 5
Multiplication of user input:5 

--Division Program Using Function--
Enter 1st num: 1
Enter 2nd num: 5
Division of user input:0 

--Find Min Number--
Enter the 1st number :1
Enter the 2nd number :5
the min number is: 1

--Find Max Number--
Enter the 1st number :1
Enter the 2nd number  :5
the max number is: 5

--Print A Number Using Loop--
Print the number of 1 to 5 = 1 
Print the number of 1 to 5 = 2 
Print the number of 1 to 5 = 3 
Print the number of 1 to 5 = 4 
Print the number of 1 to 5 = 5 */