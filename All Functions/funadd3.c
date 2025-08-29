//write a program for function in c and perform using function
//Addition

#include<stdio.h>
#include<string.h>

void  add();
int main()
{
    add();

    return 0;
}
//Addition program using function
void add()
{

    int a,b;

    printf("--Addiition Program Using Function--\n");
    printf("Enter 1st num: ");
    scanf("%d",&a);
    printf("Enter 2nd num: ");
    scanf("%d",&b);

    printf("addiition of user input:%d",a+b);
    

}

/*0utput
--addiition Program Using Function--
Enter 1st num: 555
Enter 2nd num: 445
addiition of user input:1000
*/