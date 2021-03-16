#include <stdio.h>

int main()
{
    int num,i;
    int sum = 0;

    scanf("%d", &num);

    for(i = 1 ; i <= num; i++){
        sum += i;
    }

    printf("\n %d", sum);

    return 0;
}