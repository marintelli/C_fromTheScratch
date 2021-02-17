// switch 분기문으로 다양한 조건 처리하기

#include <stdio.h>

int main()
{
    int button;

    scanf("%d", &button) ; 

    switch(button)
    {
        case 1: 
            printf("1입니다.\n");
            break;
        case 2:
            printf("2입니다. \n");
            break;
        default:
            printf("default \n");
            break;
    }
    
    return 0;
}