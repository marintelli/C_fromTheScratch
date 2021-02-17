// 입력한 회수대로 반복하기.

#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    int count ;
    scanf("%d", &count);

    for (int i = 0 ; i < count ; i ++ )
    printf("Hello, World %d\n", i);

    return 0; 
}