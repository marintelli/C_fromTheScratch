//2번


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

	double c, d;

	scanf("%lf %lf", &c, &d);

	double a = sqrt(c);
	double b = sqrt(d);

	if (a == (int)a)
	{
		printf("%d", (int)b - (int)a + 1);
	}
	else
	{
		printf("%d", (int)b - (int)a );
	}

	return 0;
}
