

/*
memory set (memset)
memset 함수를 사용하면 메모리의 내용을 원하느 크기만큼 득정갑으로 설정 가능함
함수이름은 memory set 에서 따왔스면 string.h 헤더파일에 선언되어 있음.
이떄 설정하는 크기는 바이트 단위

memset(포인터, 설정할 값, 크기);


*/
#include <stdlib.h>
#include <stdio.h> // malloc, free function.
#include <string.h> // memset 함수가 선언된 헤더 파일

int main()
{

    long long *numPtr = malloc(sizeof(long long));
    // 8byte dynamic memory allocatoin

    memset(numPtr, 0x27, 8 );
    // pointer, 설정값, 크기

    printf("0x27%llx\n", *numPtr);

    return 0; 
}