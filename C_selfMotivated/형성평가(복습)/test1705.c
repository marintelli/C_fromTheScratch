//1705

#include <stdio.h>
#include <stdlib.h>


void swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}


int main()
{
	int i, n;
	int* p;

	int max = 0;
	int min = 100;

	scanf("%d", &n);

	p = new int[n];

	for (i = 0; i < n	; i++)
	{
		scanf("%d", &p[i]);
	}

	

	for (i = 0; i < n; i++)
	{
		if (p[i] > max) max = p[i];
		if (p[i] < min) min = p[i];
	}

	printf("max : %d \n", max);
	printf("max : %d \n", min);

	delete[]p;

	return 0;
}
