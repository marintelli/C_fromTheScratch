#include <stdio.h>

#include <math.h>

int main()
{
	double area;
	double base;
	double exp;

	printf("정사각형의 넓이 : ");
	scanf("%lf", &area);

	printf("정사각형의 한 변의 길이 : %f \n", sqrt(area));
	// sqrt() 는 매개변수를 제곱근하여 double 타입으로 반환하는 함수
	printf("밑과 지수 : ");

	scanf("%lf %lf", &base, &exp);
	printf("%f의 %f승은 %f입니다. \n", base, exp, pow(base, exp));
	// pow 는 4의 2승을 double 타입으로 반환하는 함수.


	return 0;
}
