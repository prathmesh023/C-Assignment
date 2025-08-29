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

/*output
--Addition Program Using Function--
Enter 1st num: 12
Enter 2nd num: 12
Addition of user input:24

--Subtraction Program Using Function--
Enter 1st num: 12
Enter 2nd num: 12
Subtraction of user input:0 */