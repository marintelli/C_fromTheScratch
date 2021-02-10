#include <stdio.h>

int main()
{
    int num1;
    int num2;

    num1 = 2 * 3;
    num2 = 7 / 2 ;

    printf("%d\n", num1);
    printf("%d\n", num2);

// num1 / 0 ;  1을 0으로 나누는 것은 컴파일 에러

    float num3;
    float num4;

    num3 = 2.73f * 3.81f;
    num4 = 7.0f / 2.0f;

    printf("%f\n", num3);
    printf("%f\n", num4);

    float num5 = 1.0f;
    float num6 = 0.0f;
    float num7;

    num7 = num5 / num6 ;

    printf("%f\n", num7);




    return 0 ;
}