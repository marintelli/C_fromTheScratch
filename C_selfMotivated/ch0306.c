/*

3개의 정수 a,b,c 를 입력 받아
a 가 b 보다 큰지 b 가 c 보다 크거나 같은 지, a가 b보다 적거나 같은지,
b가 c 보다 작은지 비교하여 참이면 1 아니면 0을 각각 출력하는 프로그램 작성하시오
*/


#include <stdio.h>

int main()
{
    int a, b, c;
    int output1, output2, output3, output4;

    output1 = (a > b);
    output2 = (b >= c );
    output3 = (a <= b);
    output4 = (b < c);

    printf("%d %d %d %d ", &output1, &output2, &output3, output4);

    return 0;

}