#include <stdio.h> 

int main()
{
    unsigned char num1 = 4; // 0000 0100
    unsigned char num2 = 4; // 0000 0100
    unsigned char num3 = 4; // 0000 0100
    unsigned char num4 = 4; // 0000 0100
    unsigned char num5 = 4; // 0000 0100
   
    num1 &= 5 ; // 0000 0100 & 0000 0100 = 0000 0100 (4)
    num2 |= 2 ; // 0000 0100 OR 0000 0010 = 0000 0111 (7)
    num3 ^= 3 ; // 0000 0100 XOR 0000 0011 = 0000 0111 (16)
    num4 <<= 2 ; // 0000 0100 왼쪽두번이동(2의 2 제곱) 0001 0000(16)
    num5 >>= 2 ;  // 0000 0001 오른쪽두번이동(2의 2제곱분의 1) 0000 0001
    
    return 0 ; 
}