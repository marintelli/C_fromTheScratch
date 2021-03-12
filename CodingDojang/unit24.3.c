#include <stdio.h>
/*
부호 있는 자료형은 부호비트가 밀린 자리에
부호없는 (unsigned) 자료형에는 밀린 자리를 0이 채운다.
*/
int main()
{
    unsigned char num1 = 131; // 131 : 1000 0011
    char num2 = -125; // -125 : 1000 0011

    unsigned char num3;
    char num4;

    num3 = num1 >> 5; // 0000 0100
    num4 = num2 >> 5; // 1111 1100
    return 0;
}