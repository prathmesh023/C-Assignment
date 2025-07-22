// to print of addition functions by user inputs

#include <stdio.h>
int addNum(int num1, int num2);
int main() 
{
    int number1, number2, sum;

    printf("Enter the first number: "); 
    scanf("%d", &number1); 

    printf("Enter the second number: "); 
    scanf("%d", &number2); 
    sum = addNum(number1, number2); 
    
    printf("The sum of %d and %d is %d\n", number1, number2, sum); 
    return 0;
}

int addNum(int num1, int num2) 
{ 
    int result = num1 + num2; 
    return result; 
  }
