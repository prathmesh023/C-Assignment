// print a patten matching using  a b c d e

#include <stdio.h>

int main() 
{
    int i, j;
    char ch = 'A';

    for (i = 0; i < 5 ; i++) 
    {
        for (j = 0; j <= i; j++) 
        {
            printf("%c ", ch + i);
        }
        printf("\n");
    }

    return 0;
}

//  Output
//  A 
//  B B 
//  C C C 
//  D D D D 
//  E E E E E 