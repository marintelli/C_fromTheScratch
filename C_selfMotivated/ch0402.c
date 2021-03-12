/* 

한 개의 정수를 입력받아 
정수 4로 나눈 몫과 실수 4.0으로 나눈 결과값
각각 출력하는 프로그램을 작성하고
프로그램 내용에 관한 설명을 주석으로 표시하시오
(단, 실수는 반올림하여 소수 둘째 자리까지 출력한다.)

*/

#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    printf("%d / 4 = %d\n", num, num / 4);
    printf("%d / 4.0 = %.2f", num, num  % 4);
/*
정수와 실수가 혼합된 연산을 실행하면 정수는 자동으로 실수로 형변환을 하여 연산이 된다.
예를 들면 a의 값이 5라고 하면 5.0 / 4.0 을 하여 1.25가 된다.
(double)a / 4와 같이 작성을 해도 똑같은 결과가 된다. 
*/
    return 0;


}
