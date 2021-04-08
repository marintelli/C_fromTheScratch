#include <stdio.h>


void ShowArayElem(int *param, int len)
//두 번째 인자로 배열의 길이정보를 전달받도록 정의
{
    int i;
    for(i = 0 ; i < len ; i++)
    
    printf("%d", param[i]);
    // int 형 보인트 변수의 이름을 대상으로 배열형태의 접근 진행
    printf("\n");
}

int main(void)
{
    int arr1[3] = {1, 2, 3};
    int arr2[5] = {4, 5, 6, 7, 8};
    
    ShowArayElem(arr1, sizeof(arr1) / sizeof(int));
    ShowArayElem(arr2, sizeof(arr2) / sizeof(int));

    // 길이가 다른 두 배열을 대상을 Show array 함수를 호출

    return 0;
}