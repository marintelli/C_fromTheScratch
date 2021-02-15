#include <stdio.h>
#include <stdbool.h>    // bool, true, false가 정의된 헤더 파일 

int main()
{
    bool b1 = true;
    bool b2 = false;

    printf(b1 ? "true" : "false");
    
    printf("\n");

    printf(b2 ? "true" : "false");  

    printf("\n");

    return 0;

}