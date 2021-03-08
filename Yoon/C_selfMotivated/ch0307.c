/*
3개의 정수 a,b,c를 선언하여 각각 0,1,2로 초기화한 후 a와 b가 모두 참인지, a 또는 b가 참인지
b와 c가 모두 참인지, a가 참이 아닌지를 확인하여 참이면 1, 거짓이면 0을 각각 출력하는 프로그램을 작성하시오


*/
#include <stdio.h>

int main()
{
    int a = 0;
    int b = 1;
    int c = 2;

    int output1, output2, output3, output4;

    output1 = (a && b);
    output2 = (a || b);
    output3 = (b && c);
    output4 = (a != 1);

    printf("%d %d %d %d\n", output1, output2, output3, output4);


    return 0;
}