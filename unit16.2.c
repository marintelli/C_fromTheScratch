/*
형 축소(type demotion)

자료형의 크기가 작은 쪽, 표현 범위가 좁은 쪽으로 변환 되는 것
형 축소(type demotion)이라고 함.

형 축소가 일어나면 값의 손실이 일어남

컴파일 경고가 나오지 않게 하려면 형 변환(type conversion, type casting)
을 해야 함

*/

#include <stdio.h>

int main()
{
    float num1 = 11.0f;
    float num2 = 5.0f;
    // 실수에서 실수를 나눈 값음 정수형 num3에 담으면 형 축소
    int num3 = num1 / num2; // 2.2 가 아닌 2가 할당.

    printf("%d\n", num3);

    // 문자 자료형과 int 자료형을 연산은 가능
    char num4 = 28;
    int num5 = 1000000002;
    //char 은 1 바이트 메모리를 사용하므로, 그 이상의 수는 버려짐
    char num6 = num4 + num5; 
    printf("%d\n", num6);


    return 0;

}