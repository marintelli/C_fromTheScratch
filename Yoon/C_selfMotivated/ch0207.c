//두 개의 정수를 입력받아 곱과 몫을 출력하시오.
//(먼저 입력 받는 수가 항상 크며 입력되는 두 정수가 1이상 500이하)

#include <stdio.h>

int main()
{
    int x,y; // 값을 저장할 주소값 선언
    scanf("%d %d", &x, &y); // scanf로 값을 받는다.
    printf("%d * %d = %d\n", x, y, x * y );
    printf("%d / %d = %d\n", x, y, x / y );
    
    return 0;

}