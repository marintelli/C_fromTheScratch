#include <stdio.h>
// do while 문을 통해서 hello world를 100번 출력하기

int main()
{
    int i = 0;

    do // 처음 한 번은 아래 코드가 실행됨
    {
        printf("Hello world %d\n", i);
        i += 100;
    } while ( i < 50 );
    
    return 0; 
}