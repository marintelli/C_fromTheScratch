#include <stdio.h>

int main()
{
    int numArr[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 110} ; 
    // 크기가 10인 int형 배열

    for( int i = 0; i < sizeof(numArr) / sizeof(int) ; i ++)
    {
        printf("%d\n", numArr[i]); 
        // 배열의 인덱스에 반복문 변수 i를 지정
    }

    for(int i = sizeof(numArr) / sizeof(int) - 1 ; i >= 0 ; i--)
    {
        printf("%d\n", numArr[i]);
        //역순 출력
    }
        return 0;
    
}