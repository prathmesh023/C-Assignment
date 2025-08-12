//to print a string string copy(strcpy)

#include<stdio.h>
#include<string.h>
int main()
{
  char str1[100];
  char str2[]="Hello";
  //copy string from str2 to str1

  strcpy(str1,str2);
  printf("string str2 is:%s\n",str2);
  printf("copied string str2 to str1:%s\n",str1);
  return 0;
}
