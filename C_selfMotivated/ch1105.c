#include <stdio.h>

int multi (int a, int b)
{
	int i;
	int jegob = 1;

	for (i = 1; i <= b; i++)
	{
		jegob *= a;
	}


	return jegob;
}

int main()
{
	int x, y, value;

	while (1)
	{
	scanf("%d%d", &x, &y);
	if (x * y > 100) break;

	value = multi(x, y);
	printf("%d \n", value);

	}


	return 0;

}
