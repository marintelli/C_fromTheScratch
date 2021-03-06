// for 반복문에서 변수를 두개, 변수의 증가 폭을 다르게

#include <stdio.h>

int main()
{
    for(int i = 0, j = 0 ;  i < 10 ;  i++, j += 2)
    {
        printf("i : %d, j : %d \n", i, j);
    }

    return 0;
}

/*
for의 초기식에서 변수를 두 개 선언하고 0으로 초기화 하였습니다. 그리고
변화식에서 i는 1씩 증가시키고, j는 2씩 증가시켰습니다. 마지막으로
조건식에서 i < 10   까지 반복하도록 만들었습니다.

변화식에서는 ++,-- 뿐만 아니라 +=, -=, /=도 사용할 수 있습니다.
각 상황에 맞게 연산자를 사용하여 변수의 증가 폭을 조절하고,
변수를 어러 개 제어할 수 있습니다. 
*/
