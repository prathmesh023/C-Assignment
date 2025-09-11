// print a patten matching using words

#include <stdio.h>

int main() 
{
    int a, b;
    char ch = 'I';

    for (a = 0; a < 10 ; a++) 
    {
        for (b = 0; b <= a; b++) 
        {
            printf("%c ", ch + a);
        }
        printf("\n");
    }

    return 0;
}

//  Output
//  I 
//  J J 
//  K K K 
//  L L L L 
//  M M M M M 
//  N N N N N N 
//  O O O O O O O 
//  P P P P P P P P 
//  Q Q Q Q Q Q Q Q Q 
//  R R R R R R R R R R