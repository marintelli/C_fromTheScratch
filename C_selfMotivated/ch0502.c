#include <stdio.h>

int main()
{
    int x,y;

    scanf("%d %d", &x, &y);

    if(x > y)
    {
        printf("입력받은 수 중 큰 수는 %d이고 작은 수는 %d입니다.\n", x,y);
    }

    if(x < y)
    {
        printf("입력받은 수 중 큰 수는 %d이고 작은 수는 %d입니다.\n",y,x);
    }
    
    return 0;
}