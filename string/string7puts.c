// write program String use user input(only sentens print) by fgets and puts
 
 #include<stdio.h>
 #include<string.h>
  int main()

  {

    char A[500];
    printf("Enter string: ");
    fgets(A,sizeof(A),stdin);
    printf("this is your message: ");
    puts(A);

    return 0;
  }
