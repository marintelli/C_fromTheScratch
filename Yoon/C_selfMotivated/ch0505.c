#include <stdio.h>

int main()
{
    printf("주사위를 던진 값을 입력하세요. ");
    
    int x,y;

    scanf("%d %d\n", &x, &y);

    if ( x > 3 && y > 3) 
    {
        printf("이겼습니다. \n");
    } else if ( x > 3 || y > 3) 
    {
        printf("비겼습니다. \n");
    } else {
        printf("졌습니다. \n");
    }
   

    return 0;
}