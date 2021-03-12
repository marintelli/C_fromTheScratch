#include <stdio.h>

int main()
{
    int a, b;
    int max_data;
    printf("두 수를 입력하시오. ");
    scanf("%d %d\n");
    max_data = (a > b) ? a : b;
    /*
    이러한 형식의 연산자를 조건연산자라 하며 C언어의 연산자 중 유일하게 피연산자가 
    3개이기 때문에 3항 연산자라고도 한다. 조건시기 참이면 식1,
    거짓이면 식2를 실행한다.

    소스를 짧고 간결하게 해주는 장점 때문에 사용은 하지만 
    if문으로 더욱 알기 쉽게 표현할 수 있기 때문에 많이 사용되지는 않는다. 
    */

   printf("%d\n", max_data);
   

    return 0;
}