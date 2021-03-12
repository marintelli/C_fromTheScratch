#include <stdio.h>

int main()
{
    int num1 = 10;
    char c1 = 'a';
    int *numPtr = &num1 ;
    char *cPtr1 = &c1;

    void *ptr ; 

    ptr = numPtr; // void 포인터에 int 포인터 저장
    ptr = cPtr1; // void 포인터엔 char 포인터 저장.
// 포인터 자료형이 달라도 컴파일 경고가 발생하지 않음 
    numPtr = ptr; // int 포인터에 void 포인터 저장
    cPtr1 = ptr ; //char 포인터에 void 포인터 저장
 
    return 0;
    
}