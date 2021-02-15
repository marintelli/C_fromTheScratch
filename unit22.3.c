#include <stdio.h>
#include <stdbool.h>    // bool, true, false가 정의된 헤더 파일

int main()
{
    printf("%d\n", true && true);
    printf("%d\n", true && false);
    printf("%d\n", false && true);
    printf("%d\n", false && false);

    printf("%d\n", true || true);
    printf("%d\n", true || false);
    printf("%d\n", false || true);
    printf("%d\n", false || false);
    
    return 0 ;
}