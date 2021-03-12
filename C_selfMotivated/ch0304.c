// 정수와 변수 a와 b를 입력받아서 a는 전치 증가 연산자를 사용하고 b는
// 후치 감소 연산자를 사용하여 두수의 합을 c에 저장한 후 각각 출력하느 프로그램

#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    c = ++a + b--;
    // ++a와 b--가 먼저 계산 된 후 두 값을 더한 값이 c에 대입된다. 
    
    printf("a = %d, b = %d, c = %d\n", a, b, c);


    return 0;
}