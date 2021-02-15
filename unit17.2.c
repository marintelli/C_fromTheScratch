
//if 조건문을 사용할 때는 ; (세미콜론)을 항상 주의,
// 중괄호 생략 간으
#include <stdio.h>

int main()
{
    int num1 = 10; 
//    if (num1 ==10);  if 조건문 끝에는 ; 불가, 컴파일에러 
    if (num1 ==10)
    {
        printf("10입니다. \n");
    }
// 실행코드가 한 줄이라면 중괄호 생략 가능 
    if (num1 == 10)
    printf("10입니다.\n");

}