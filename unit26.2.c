#include <stdio.h>
//지금까지 각 case마다 break를 붙여주었는데 
//break가 없으면 어떻게 될까요? 앞의 소스에서 break를 모두 삭제합니다.

int main()
{
    int num1;
    scanf("%d", &num1);

    switch(num1)
    {
        case 1: 
        printf("1입니다.\n");
        case 2: 
        printf("2입니다. \n");
        default:
        printf("default입니다. \n");


    }

    return 0; 
    
}