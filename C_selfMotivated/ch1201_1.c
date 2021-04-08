#include <stdio.h>


void input(int a[], int cnt)
{
	int i;
	for (i = 0 ; i < cnt; i++) scanf("%d", &a[i]);

}

void output(int a[], int cnt)
{
	int i;
	for (i = 0; i < cnt; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

}

void swap(int& x, int& y)
{
	int tmp = x;
	x = y;
	y = tmp;

}

void sort(int a[], int cnt)
{
	int i, j;
	for (i = 0; i < cnt - 1; i++) 
	{
		for (j = i + 1; j < cnt; j++)
		{
			if (a[i] > a[j]) swap(a[i], a[j]); // i번 인덱스와 나머지 인덱스들을 순차적으로 비교하며 크면 스왑해주어 최솟값이 i로 오게됨;

			// 926834 296834 296834 296834 == 296834
			// 2 96834 69834 69834 39864 >>239864
			// 23 9864 8964 6984 4986 >> 234986
			// 234 986 896 698 >> 234698
			// 2346 98 89 >> 234689

		}
	}

}

int main()
{
	int arr[6];

	input(arr, 6);
	sort(arr, 6);
	output(arr, 6);

	return 0;
}
