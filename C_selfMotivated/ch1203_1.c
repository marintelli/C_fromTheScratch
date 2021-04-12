#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a, b;
	double c, d;

	scanf("%d %d", &a, &b);
	scanf("%lf %lf", &c, &d);

	printf("두 정수의 차 : %d \n", abs(a - b)); // ()안의 정수의 절대값 abs() <stdlib.h> 에 포함
	printf("두 실수의 차 : %f \n", fabs(c - d)); // ()안의 실수의 절대값 fabs() <math.h> 에 포함

	return 0;


}
