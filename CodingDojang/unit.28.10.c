#include <stdio.h>

int main()
{
    unsigned char i = 1 ;
    while (i != 0)
    {
        printf("%u\n", i);
        i <<= 1;   
    }

    return 0;
}

/*

0000 0001
0000 0010
0000 0100
0000 1000
0001 0000
0010 0000
0100 0000
1000 0000
0000 0000 (i = 0)

*/