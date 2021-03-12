#include <stdio.h>

int main()
{
    unsigned char num1 = 1 ; // 1 : 0000 0001
    printf("%u\n", num1 << 1); // 2 : 0000 0010
    printf("%u\n", num1 << 2); // 4 : 0000 0100
    printf("%u\n", num1 << 3); // 8 : 0000 1000
    printf("%u\n", num1 << 4); // 16 : 0001 0000

    return 0 ; 
}