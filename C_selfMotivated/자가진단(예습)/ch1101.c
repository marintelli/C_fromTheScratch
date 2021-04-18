#include <stdio.h>


void line()
{
	puts("!@#$^&*()_+|");
}
	
int main()
{
	int x, num = 0;
	scanf("%d", &x);

	while (num < x)
	{
		line();
		num++;

	}
	return 0;
}
