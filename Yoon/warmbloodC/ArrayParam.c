#include <stdio.h>

void ShowArayElem(int * param, int len)
{

    int i ;
    for(i = 0 ; i < len ; i ++ )
    printf("%d", param[i]);
    printf("\n");

}

void AddArayElem(int * param, int len, int add)

{
    int i;
    for(i = 0 ; i < len ; i ++)
    param[i] += add; 

}

int main(void)
{
    int arr[3] = {1, 2, 3};
    AddArayElem(arr, sizeof(arr) / sizeof(int), 1);
    ShowArayElem(arr, sizeof(arr) / sizeof(int));

    return 0;

}

/*
두 함수에는 int형 배열의 주소 값을 인자로 전달받을 수 있도록 int 형 포인트 변수가
선언 되었다.

void ShowArayElem(int *param, int len){...};
void AddArayElem(int *param, int len, int add){...};

int *param 대신하여 int param[]을 선언할 수도 있다.

void ShowArayElem(int param[], int len){...};
void AddArayElem(int param[], int len, int add){...};

*/