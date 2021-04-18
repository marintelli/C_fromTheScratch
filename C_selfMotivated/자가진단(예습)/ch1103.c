#include <stdio.h>


void star(int n)
{
	int i, j, num = 1 ;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			printf("%d ", num++);
		}
		printf("\n");
	}
}

int main()
{
	int n;

	scanf("%d", &n);
	star(n);

	return 0;
}
