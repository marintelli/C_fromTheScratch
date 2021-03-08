#include <stdio.h>

int main()
{
    int a = 10;
    int b = 10;

    printf("최초값 a = %d, b = %d\n", a, b);

    printf("a++ = %d, ++b = %d\n", a++, ++b);
    printf("실행 후 a = %d, b = %d\n", a, b);
    printf("a-- = %d, --b = %d\n", a--, --b);
    printf("실행 후 a = %d, b = %d", a, b);

    
    return 0 ;
}