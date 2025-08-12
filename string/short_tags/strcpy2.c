//to print a string string copy(strcpy)

#include<stdio.h>
#include<string.h>
int main()
{
  char a[100]="Prathmesh";
  char b[100];
  //copy string from str2 to str1

  strcpy(b,a);
  printf("string a is:%s\n",a);
  printf("copied string a to b:%s\n",b);
  return 0;
}