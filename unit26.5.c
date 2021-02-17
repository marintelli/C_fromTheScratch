/*
switch에서 판별할 변수는 정수 자료형만 사용할 수 있고,
실수 자료형(float, double)은 사용할 수 없습니다. 
단, 문자 자료형(char)도 정수 자료형이므로 switch에서 사용할 수 있습니다.
*/
#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS  
  // scanf 보안 경고로 인한 컴파일 에러 방지

int main()
{
    char c1;
    scanf("%c", &c1);

    switch(c1)
    {
        case 'a': 
        printf("a 입니다.\n ");
        break;
        case 'b':
        printf("b 입니다.\n");
        break;
        default: 
        printf("default \n");
        break;

    }

    return 0;
}

/* switch 에서 문자 자료형을 사용핻 정확히 동작합니다. 
여기서 case에는 숫자대신 'a' : 처럼 작은 따옴표를 사용하여 문자를 지정해줍니다.
단, C 언어에서는 case "Hello": 처럼 문자열은 사용할 수 없습니다.
*/
