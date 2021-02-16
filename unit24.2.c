#include <stdio.h>
//시프트 연산자를 사용하여 비트가 첫째 자리나 미자막 자리를 넘어선 경우
int main()
{
    unsigned char num1 = 240 ; // 240 : 1111 0000
    unsigned char num2 = 15 ; // 15 : 0000 1111

    unsigned char num3, num4;

    num3 = num1 << 2 ; //  1100 0000
    num4 = num2 >> 2 ; // 0000 0011

    printf("%u\n", num3); // 192 : 1100 0000
    printf("%u\n", num4); // 3 : 0000 0011

    return 0;
    
}