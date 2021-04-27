#include <stdio.h>
#include <math.h>

void input(int a[], int cnt)
{
	for (int i = 1; i < cnt; i++)
	{
		scanf("%d", &a[i]);
	}
}

void abshap(int a[], int cnt)
{
	for (int i = 1; i < cnt; i++)
	{
		a[0] += abs(a[i]);
	}
}


int main()
{

	int arr[6] = { 0 };
	
	input(arr, 6);

	abshap(arr, 6);

	printf("%d", arr[0]);

}
