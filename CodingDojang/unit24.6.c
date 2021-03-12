// complete source code with output 4, 0

#include <stdio.h>
 
int main()
{
    unsigned char flag1 = 1 << 7; // 1000 0000
    unsigned char flag2 = 1 << 3; // 0000 100 
 
    flag1 |= 1 << 2; // 1000 0000 |= 0000 0100 = 1000 0100
    flag1 &= ~(1 << 7) ;// 1000 0100 & 0111 1111 = 0000 0100 (4)
    flag2 ^= 1 << 3; // 0000 1000 ^= 0000 1000 = 0000 0000(0)
 // 토글 두 비트가 같으면 끄고 다르면 킨다. 비트카 켜져 있다면 끄고, 꺼져있다면 킴.
    printf("%u %u\n", flag1, flag2);
 
    return 0;
}