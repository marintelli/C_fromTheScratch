#include <stdio.h>

int main()
{
    for(int i = 2; i <= 4 ; i++){
        for(int j = 1 ; j <= 9 ; j++){
            printf(" %d * %d = %d \n", i,j,i*j);
        }
    }
    return 0;
}