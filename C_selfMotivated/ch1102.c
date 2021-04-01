#include <stdio.h>

void circle(double bangirm)
{
	double one = 3.14 * bangirm * bangirm;
	printf("%.2lf", one);

}


int main()
{
	double num;
	scanf("%lf", &num);
	circle(num);

	return 0;
}
