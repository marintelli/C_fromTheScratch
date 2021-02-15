#include <stdio.h>
#include <math.h>
int main()
{
// 정수의 나머지 연산자.

    printf("%d\n", 1 % 3);
    printf("%d\n", 2 % 3);
    printf("%d\n", 3 % 3);
    printf("%d\n", 4 % 3);
    printf("%d\n", 5 % 3);
    printf("%d\n", 6 % 3);

/*
 실수에서 나머지 연산자

 math.h 헤더 파일의 fmod, fmodf, fmodl함수로 
 구할 수 있다. 각 double ,float, long double 타입
 일 때 각각 사용하며,

 fomd(나누어지는 수, 나누는 수);

*/


    double num1 = 10.843;
    double num2 = 3.79;
    printf("%f\n", fmod(num1,num2));

    float num3 = 10.843f;
    float num4 = 3.79f;
    printf("%f\n", fmodf(num3,num4));

    long double num5 = 10.843l;
    long double num6 = 3.69l;
    printf("%LF\n", fmodl(num5,num6));

    




    return 0;
}