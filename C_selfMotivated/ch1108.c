#include <stdio.h>


int a, b;
int hap, gop;

void input()
{
	printf("두 수를 입력하세요. ");
	scanf("%d %d", &a, &b);
}

void gugudan(int a, int b)
{
	int gugudan;
	for (int i = a; i <= b; i++)
	{
		printf( "== %d 단 == \n", i);

		for (int j = 1; j <= 9; j++)
		{
			printf("  %d * %d = %d \n ", i, j, i * j);
		}
		
	}

}



int main()
{
	input();
	gugudan(a, b);

	return 0;
}
