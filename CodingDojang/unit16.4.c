/*
문자 출력하기 예제

char 은 1바이트 짜리 정수자료형이므로, 
char보다 크거나 같은 정수나 실수자료형에 
할당할 수 있다. 
*/

#include <stdio.h>

int main()
{
    char c1 = 'a';
    int num2 = c1;
    printf("%c\n", num2);

    return 0;
}
