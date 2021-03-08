/*
3개의 정수 a,b,c를 입력 받아솨서
a와 b, b와 c, b와 c 를 각각 비교하여
같으면 1 같지 않은면 0을 출력하고
다음에는 같지 않으면 0 같으면 1을 출력하시오
*/

#include <stdio.h>

int main()
{
    int a, b, c;
    int result1, result2, result3, result4;

    scanf("%d %d %d", &a, &b, &c);

    result1 = (a==b);
    // a == b 가 같으냐? 같으면 1 반환 아니라면 0 반환하고 그값음 대입

    result2 = (b == c);

    result3 = (a != b);
    // a와 b 가 같지않냐? 같지 않다는 것이 참이면  1 아니면 0
    result4 = (b != c);

    return 0;

}