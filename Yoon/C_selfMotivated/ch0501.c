#include <stdio.h>

int main()
{
    int x;
    scanf("%d\n", &x);

    printf("%d", x);

    if(x > 10) printf(" %d보다 큰 수를 입력하셨습니다. \n", x);


    return 0;

}