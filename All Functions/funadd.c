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
//addition program using function
void add()
{

    int i,j;

    printf("--Addition Program Using Function--\n");
    printf("Enter 1st num: ");
    scanf("%d",&i);
    printf("Enter 2nd num: ");
    scanf("%d",&j);

    printf("Addition of user input:%d",i+j);
    

}

/*0utput
--Addition Program Using Function--
Enter 1st num: 10
Enter 2nd num: 20
Addition of user input:30
*/