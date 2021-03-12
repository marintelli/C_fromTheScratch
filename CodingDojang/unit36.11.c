#include <stdio.h>
// 2진수를 10진수로 변환
int main()
{
    int decimal = 0; // 10진수
    int binary[4] = { 1, 1, 0, 1}; // 2 진수를 담은 배열
    int position = 0; // 자리수

    //역순으로 2진수를 읽어서 만약 1이면

    for( int i = sizeof(binary) / sizeof(int) - 1; i>= 0 ; i --)
    {
        if(binary[i] == 1)
        decimal += 1 << position; 
        // 1을 자릿수만큼 왼쪽 shift 한 뒤에 더하여 저장
    
        position ++;

    }

    printf("%d\n", decimal);
    return 0;

}