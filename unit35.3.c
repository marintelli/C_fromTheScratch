

/*
memory set (memset)
memset 함수를 사용하면 메모리의 내용을 원하는 크기만큼 특정값으로 설정 가능함
함수이름은 memory set 에서 따왔으면 string.h 헤더파일에 선언되어 있음.
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
    // pointer, 설정값(1진수 0x27), 크기(8byte)

    printf("0x27%llx\n", *numPtr);
    free(numPtr) ; // 메모리 해제


    return 0; 
}

/*

자료형의 크기 와 포인터의 크기

memset 함수에 설정할 크기를 지정할 때 보통 숫자 대신
sizeof를 사용합니다. 

long long *numPtr = malloc(sizeof(long long));
memset(numPtr, 0, sizeof(long long));
 // numPtr이 가리키는 메모리를 long long 크기만큼 0 으로 설정

 
*/