#include <stdio.h>

int main()
{
	int num, i;
	int count[10] = { 0 };

	while (1) {
		scanf("%d", &num);
		if (num > 100 || num < 0) break;
		count[num / 10]++; // 입력된 정수의 10의 자리 숫자 ++
	}

	for (i = 0; i < 10; i++)
	{
		if (count[i] > 0) printf("%d : %d개 \n", i, count[i]);
	}

	return 0; 
}
