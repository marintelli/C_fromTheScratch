#include <stdio.h>

int main()
{
    int num1 = 1;
    int num2 = 2;
    int num3;

    num3 = num1 << 2 + num2 << 1 ;  // <<보다 +우선순위가 높아요.
    // 2 + num2 
    // num1 << 4 << 1 
    // num3 = 32 

    printf("%d\n", num3);



    int num4;

    num4 = 5 ==5 < 10 ; // == 보다 <의 우선순위가 높음
 
    // 5 < 10 ? 참이므로 1
    // 5 == 1 ? 거짓이므로 0
    // num4 = 0


    return 0;
}