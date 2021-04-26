#include <stdio.h>

#define N 10
#define SWAP(x,y) {int z = x; x= y; y= z;}

void input(int a[])
{
	int i;
	for (i = 0; i < N; i++)
	{
		scanf("%d", &a[i]);
	}
}

void sort(int a[])
{
	int i, j, k;
	for ( i = 1;i < N; i++)
	{
		for (j = 0, k= 0; j < N - i, k < N; j++,k++) {
			if (a[j] < a[j + 1])
			{
				SWAP(a[j], a[j + 1]);
			}
			printf(" %d ", a[k]);
		}

	}
}

void output(int a[])
{
	int i;
	for (i = 0; i < N; i++)
	{
		printf("%d ", a[i]);
	}
}

int main()
{
	int i;
	int arr[N];

	input(arr);
	sort(arr);


	return 0;
}
