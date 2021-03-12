#include <stdio.h>

int main()
{
    int height = 170;
    long double weight = 68.6l;

    printf("My height\n");
    printf("%d\n", height);
    printf("My weight\n");
    printf("%Lf", weight);

    return 0; 
}

/*

68.6000000에 적합한 데이터 타입은?

long double type

그것을 지칭하는 서식문자는?
%Lf: long floating point

*/

