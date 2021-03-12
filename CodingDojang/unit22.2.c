#include <stdio.h>
#include <stdbool.h>

int main()
{
    printf("int의 크기 : %d\n", sizeof(int));
    printf("bool의 크기 : %d\n", sizeof(bool));
}

/* 
sizeof 연산자로 intdhk bool자료형의 크기를 구하면,
int는 4바이트 bool은 1바이트로 int와 bool의 크기는 다르다는 것을 기억하자
*/