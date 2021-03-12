#include <stdio.h>

int main()
{
    double a,b;
    int c, d;

    scanf("%lf %lf", &a, &b);
   
   
    c = a + b ;
    // 실수 두개를 더하여 정수 d변수에 대입, 실수부는 자동으로 버려진다. 

    d = (int)a + (int)b ;
     // 두개의 실수를 각각 정수로 변환하여 정수 변수에 대입

    printf(" %d %d \n", a, b);
    // 결과값을 출력하고 비교해본다. 

    return 0;
}