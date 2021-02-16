#include <stdio.h>
//  비트 연산자.
int main()
{
    unsigned char num1 = 1; // 0000 0001
    unsigned char num2 = 3; // 0000 0011

    printf("%d\n", num1 & num2); // 0000 0001  AND
    printf("%d\n", num1 | num2); // 0000 0011  OR
    printf("%d\n", num1 ^ num2); // 0000 0010  XOR

    // ~x 비트 NOT연산자. 
    unsigned char num3 = 162; // 1010 0010
    unsigned char num4; 

    num4 = ~num3; // 0101 1101 NOT

    printf("%u\n", num4);

    //시프트 연산자.

    unsigned char num5 = 3 ; // 0000 0011
    unsigned char num6 = 24 ; // 0001 1000

    printf("%u\n", num5 << 3 ); // 0001 1000
    printf("%u\n", num6 >> 2); // 0000 0110


    return 0;

}