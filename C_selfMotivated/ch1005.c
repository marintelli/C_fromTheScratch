#include <stdio.h>

int main()


{
// 2행 4열 배열 두 개를 만들어서 입력을 받고 두 배열의 곱을 구하여출려하는 프로그램을 출력하시오.
	int i, j;
	int a[2][4], b[2][4], multi[2][4];

	printf("first array\n");

		for (i = 0; i < 2; i++)
		{
			for (j = 0; j < 4; j++)
			{
				scanf("%d",&a[i][j]);
			}
		}

		printf("second array\n");

		for (i = 0; i < 2; i++)
		{
			for (j = 0; j < 4; j++)
			{
				scanf("%d", &b[i][j]);
			}
		}

		for (i = 0; i < 2; i++)
		{
			for (j = 0; j < 4; j++)
			{
				multi[i][j] = a[i][j] * b[i][j];
			}
		}

		for (i = 0; i < 2; i++)
		{
			for (j = 0; j < 4; j++)
			{
				printf("%d ",multi[i][j]);
			}
			printf("\n");
		}
  
  
	return 0;
}
