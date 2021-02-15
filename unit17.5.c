/*이번에는 scanf 함수를 사용하여 사용자가
입력한 값을 변수에 저장하고,
 if 조건문으로 값을 비교해보겠습니다.
 */

#define _CRT_SECURE_NO_WARNINGS // scaf 보안 경고로 인한 컴파일 에러 방지

#include <stdio.h>

int main ()
{
    int num1;

    scanf("%d", &num1);

    if (num1 == 10)
    {
        printf("output 10. \n");
    }
    
    if (num1 == 20)
    {
        printf("20 입니다. \n");
    }


    return 0 ; 

}