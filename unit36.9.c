#include <stdio.h>

/*
이번에는 배열을 응용해서 10진수 2진수로 변한한 뒤 배열을 넣어보겠스빈다.
10진수를 2진수 변환방법
10진수를 0이 될 때까지 2로 나눈 뒤 나머지를 역순으로 읽으면 2진수가
됩니다.
*/
int main()
{
int decimal = 13;
int binary[20] = { 0, };
int positoin = 0;

    for(;;)
    {   
        binary[positoin] = decimal % 2;
        decimal = decimal / 2;
        positoin++; // 자릿수 변경
        if(decimal == 0)
            break;

    }
// 나머지들을 역순으로 읽어주기
    for(int i = positoin - 1 ; i>=0; i--)
    {
        printf("%d", binary[i]);
    }

    printf("\n");

    return 0;
}