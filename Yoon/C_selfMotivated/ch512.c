#include <stdio.h>

int main()
{
    int chu = 49;
    
    float grav = 0.2683;

    printf("%d * %f = %f \n ", chu, grav, chu * grav );
    
    // int 와 ld 를 어떻게 곱해줄까? 
    // %d 와 %f 는 다른 별도의 변환 없이 곱이 가능
    // %f 는 소숫점 6자리 숫자까지 출력 


    return 0; 
}
