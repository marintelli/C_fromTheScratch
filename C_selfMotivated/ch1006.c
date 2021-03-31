#include <stdio.h>

int main()
{
	int i, j, suc = 0;
	int arr[5][5] = { {0} }; // 4개의 과목보다 1열 더 추가하였음.

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &arr[i][j]);
			arr[i][4] += arr[i][j];
		}
	}

	for (i = 0; i < 5; i++)
	{
			if ((arr[i][4] / 4) >= 80) // 총점란의 평균이 80이상이면
			{
				printf("pass\n");
				suc++; // success 1추가
			}
			else printf("fail\n");

	}

	printf("Successful : %d", suc);

	return 0;
}
