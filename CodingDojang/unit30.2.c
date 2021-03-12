#include <stdio.h>
// 1 부터 100중에 짝수만 출력
int main()
{
    for(int num1 = 0 ; num1 < 100 ; num1++ )
    {

        if(num1 % 2 != 0) // 만약 홀수이면
        continue; // contine 밑단 명령문은 수행하지 않고 다시 반복문 위로 돌아간다.

        printf("%d\n", num1);

    }
    return 0;
    

}