//to print a string string copy(strcpy)

#include<stdio.h>
#include<string.h>
int main()
{
  char x[]="Prathmesh Mirage";
  char y[100];
  //copy string from x to y

  strcpy(y,x);
  printf("string x is:%s\n",x);
  printf("copied string x to y:%s\n",y);
  return 0;
}