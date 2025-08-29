//write a program for function in c. and perform multi operation using function
//Addition Subtraction

#include<stdio.h>
#include<string.h>

void add();
void sub();

int main()
{
    add();
    sub();

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

/*output:-
--Addition Program Using Function--
Enter 1st num: 12
Enter 2nd num: 323
Addition of user input:335 

--Subtraction Program Using Function--
Enter 1st num: 21
Enter 2nd num: 32
Subtraction of user input:-11 */