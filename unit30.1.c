// 무한 루프에서 숫자를 증가 시키다가 100이 나오면 반복문을 끝내기

#include <stdio.h>


int main()
{
    int num1 = 0;

    while(1)
    {
        num1 ++;
        printf("%d\n", num1);
        if(num1 == 100) // 만약 num1 값이 100이면
        break; // 반복문을 빠져 나와랏!! 

    }

    return 0;

}