//1704

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num[10] = {};
	int odd = 0, even = 0;

	int* ptrnum = num;

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", (ptrnum + i));

		if (*(ptrnum + i) % 2 == 0) even++;
		if (*(ptrnum + i)% 2 != 0) odd++;
	}


	printf("odd : %d\n", odd);
	printf("even : %d\n", even);


	return 0;
}
