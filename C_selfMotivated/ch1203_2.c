#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int a, b;
	double c, d;

	scanf("%d %d", &a, &b);
	scanf("%lf %lf", &c, &d);

	int max;
	(abs(a) > abs(b)) ? max = a : max = b;

	double fmin;
	(fabs(c) <fabs(d)) ? fmin = c : fmin = d;

	printf("%d \n", max); 

	printf("%f \n", fmin);
	

	return 0;


}
