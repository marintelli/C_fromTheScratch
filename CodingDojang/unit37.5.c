#include <stdio.h>
// 2 차배열 출력 및 역순 출력
int main()
{
    int numArr[3][4] = {
        { 11, 22, 33, 44 },
        { 55, 66, 77, 88 },
        { 99, 110, 121, 132 }
    };

    int col = sizeof(numArr[0]) / sizeof(int); //2차원 배열의 가로 크기
    int row = sizeof(numArr) / sizeof(numArr[0]);

    for ( int i = 0 ; i < row ; i++)
    {
        for (int j = 0; j< col ; j ++)
        {
            printf("%d ", numArr[i][j]);
        }
        printf("\n");
    }

    for ( int i = row - 1 ; i >= 0 ; i -- )
    {
        for (int j = col - 1; j >= 0 ; j --)
        {
            printf("%d ", numArr[i][j]);
        }

        printf("\n");
    }

    return 0;
}