// 두 개의 실수를 입력 받아 반올림하여 소수 둘째자리까지 출력하는 프로그램 

#include <stdio.h>

int main()
{
    double x,y;
    printf("두 개의 실수를 입력하시오\n");
    
    scanf("%lf %lf",  &x, &y);
    //float과 double 이 실수를 담는 자료형, float형은 전체의 길이기ㅏ 6자리를 너어가게 되면 정확한 결과를 기대할 수 없다. 왠만하면 double 형을 쓰자.
    
    printf("x = %.2f \n", x);
    printf("y = %.2f \n", y);

    return 0 ;

}