// write program String use user input(only sentens print) by fgets and puts
 
 #include<stdio.h>
 #include<string.h>
  int main()

  {

    char str[50];
    printf("Enter string: ");
    fgets(str,sizeof(str),stdin);

    printf("your message: ");
    puts(str);

    return 0;
  }
