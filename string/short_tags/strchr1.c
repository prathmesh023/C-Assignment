// to write a program string using(strchr) charater search
//19-8-25

#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="Prathmesh";
    char *ptr;

    //search for charater of "t"
    ptr = strchr(str,'t');

    if(ptr !=NULL)
    {
        printf("CHARATER IS FOUND AT POSITION : %ld\n",ptr - str);
    }
    else
    {
        printf("CHARATER IS NOT FOUND"); 
    }
    return 0;
}