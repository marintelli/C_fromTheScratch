#include <stdio.h>
// 거짓이면 0, 0이 아닌 양수는 참으로 인식한다. 
int main()
{
    int num1 = 10;


    printf("%d\n", num1 == 10);
    printf("%d\n", num1 != 2);    
    printf("%d\n", num1 > 10);
    printf("%d\n", num1 < 10);
    printf("%d\n", num1 >= 10);
    printf("%d\n", num1 <= 10);

    

    int num2 = 5 ;
    int num3;
// num2의 값이 0이 아니므로 참으로 인식하고 num3에 100을 할당
    if(num2)
    num3 = 100;
    else 
    num3 = 200;

    printf("%d\n", num3);

// num4가 참이면 100 거짓이면 200을 num5에 할당하라.

    int num4 = 0;
    int num5;

    num5 = num4 ? 100 : 200;

    printf("%d\n", num5);


    return 0;
}