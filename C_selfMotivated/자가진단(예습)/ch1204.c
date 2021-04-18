#include <stdio.h>

#include <math.h>

int main()
{
	double area;


	printf("원의 넓이 : ");

	scanf("%lf", &area);

	printf("반지름의 길이 %.2f \n", sqrt(area/3.14));


	return 0;
}
