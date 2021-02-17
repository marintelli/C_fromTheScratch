/*
지금까지 조건식에서 반복 횟수를 덩한 뒤 변수 i를 증가시키거나 감소기켜서 while 반복문을
사용했지만 while 반복분은 반복 횟수가 정해지지 않았을 때, 논리 조건에 따라 
반복 여부를 결정할 때 
*/

#include <stdio.h>
#include <stdlib.h> // srand, rand 함수가 선언된 헤더 파일
#include <time.h> // time 함수가 선언되 헤더 파일

int main()
{
    srand(time(NULL)); // 현재 시간 값으로 시드 결정

    int i = 0;
    while (i != 3)  // 3이 아닐 때 계속 반복
    {
        i = rand() % 10; // rand 함수로 무작위 정수를 생성후 10미만 숫자 만들기
        printf("%d\n", i);

    }

    return 0; 
}