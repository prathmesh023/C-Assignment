//write a program for function in c and perform using function
//Addition

#include<stdio.h>
#include<string.h>

void  addi();
int main()
{
    addi();

    return 0;
}
//Addition program using function
void addi()
{

    int a,b;

    printf("--addiition Program Using Function--\n");
    printf("Enter 1st num: ");
    scanf("%d",&a);
    printf("Enter 2nd num: ");
    scanf("%d",&b);

    printf("addiition of user input:%d",a+b);
    

}

/*0utput
--addiition Program Using Function--
Enter 1st num: 100
Enter 2nd num: 220
addiition of user input:320
*/