#include <stdio.h>

void input(int a[], int n)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

}

void sort(int a[], int n)
{
	int tmp;

	for (int i = 0; i < n - 1; i++)
	{
		for(int j = 0; j < (n - i ) - 1 ; j ++)
			
			if (a[j] < a[j + 1])
			{
				tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
	}
}

void output(int a[], int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}

int main()
{
	

	int arr[10] = {0, };
	int len;

	scanf("%d", &len);
	
	input(arr, len);
	sort(arr, len);
	output(arr, len);
	

	return 0;
}
