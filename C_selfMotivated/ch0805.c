#include <stdio.h>

int main()
{
    int i, j;

    for( i = 1 ; i <= 5; i++){
        for(j = 1 ; 5 - i; j++ ){// blank number on each line
            printf(" ");
        } 
        for(j = 1; j <= 2 * i -1 ; j++)
        {
            printf("*");
        }
    }
    return 0;
}