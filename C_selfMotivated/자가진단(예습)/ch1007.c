#include <stdio.h>

int main()
{
	int i, j;
	int arr[6][6] = { 0 };

	for (i = 0; i < 6; i++)
	{
		arr[0][i] = 1; 
		arr[i][0] = 1;
	}

	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= 5; j++)
		{
			arr[i][j] = arr[i - 1][j] + arr[i][j - 1];

		}
	}


	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d ", arr[i][j]);

		}
		printf("\n");
	}
	
	


	return 0;
}
