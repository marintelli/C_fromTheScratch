#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
// scanf 보안 경고로 인한 컴파일 에러 방지
// switch의 case 엗 들어가는 코드가 길어지면 변수선언 하는 경우도 있음.
// 중괄호를 넣어주어야 합니다.

int main()
{
    int num1 ;
     scanf("%d", &num1);

     switch(num1)
     {
         case 1: 
           {
            int num2 = num1; // compiler error 
            printf("%d입니다.\n", num2);
            break;
            }
        case 2: 
            printf("2입니다.\n");
            break;
        default:
            printf("defualt \n");
            break;


     }

     return 0;
     
}