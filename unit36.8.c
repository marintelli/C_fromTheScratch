#include <stdio.h>
// 포인터를 통한 배열접근
int main()
{
    int numArr[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 110};
    int *numPtr = numArr;
    printf("%d\n", *numPtr); // 배열의 첫번째 요쇼에 접근
    printf("%d\n", numPtr[5]); // 배열의 6번째 요소에 접근하여  정수 값 출력
    printf("%d\n", sizeof(numArr)); // numArr 배열이 메모리에 차지하는 공간


    return 0;

}