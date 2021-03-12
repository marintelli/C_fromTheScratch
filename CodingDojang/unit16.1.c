/*
자료형의 확장 알아보기 
암시적 형 변환 (implicit type conversion)
자료형의 크기가 큰 쪽(표현 범위가 넓은 쪾으로 자동 변환)
즉, 형 확장(type promtion)이 발생하고 
값이 버려지지 않고 보전된다. 
*/

#include <stdio.h>

int main()
{
    int num1 = 11;
    float num2 = 4.4f;
// 정수와 실수의 연산 결과가 실수로 형 확장 
    printf("%f\n", num1 + num2 );
    printf("%f\n", num1 - num2 );
    printf("%f\n", num1 * num2 );
    printf("%f\n", num1 / num2);

    return 0; 
}