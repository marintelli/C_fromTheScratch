#include <stdio.h>
// 변수 하나에서 나머지 연산하기
int main()
{
    int num1 = 7 ;

 //   num1 = num1 % 2;
    num1 %= 2;

    printf("%d\n",num1);


//음수 나머지 연산 

    printf("%d\n", 5 %(-3));
//결론적으로 a % b를 연산하면 결과는 a의 부호를 따릅니다

    return 0;

}

