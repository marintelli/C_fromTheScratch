#include <stdio.h>

int main()
{

	int i ;
	int fibo[100] = { 100, };
	scanf("%d", &fibo[1]);

	printf("%d %d", fibo[0], fibo[1]);

	for(i = 2; i <100 ; i++)
	{

		fibo[i] = fibo[i - 2] - fibo[i - 1];

		printf(" %d", fibo[i]);

		if (fibo[i] < 0) break;
	}

	


	return 0;
}
