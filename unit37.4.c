#include <stdio.h>

int main()
{
    int numArr[3][4] { 
        { 11, 22, 33, 44},
        { 55, 66, 77, 88},
        { 99, 110, 121, 132},
    };

    // 48 : 4 byte 크기의 요소가 12 (4*3)
    printf("%d\n", sizeof(numArr));
    // 4 : 2차원 배열의 가로 크기를 구할 때는,
    int col = sizeof(numArr[0]) / sizeof(int);
    // 가로 한 줄의 크기 / 요소의 크기
    int row = sizeof(numArr) / sizeof(numArr[0]);
    // 세로의 크기 =   배열이 차자하는 전체공간 / 가로 한 줄의 크기

    printf("%d\n", col);
    printf("%d\n", row);

    return 0 ;
    
}