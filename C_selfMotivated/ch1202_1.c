#include <stdio.h>

void input(int a[], int cnt)
{
	int i;

	printf("%d과목의 점수를 입력하세요. ", cnt);
	for (i = 0; i < cnt; i++)
	{
		scanf("%d", &a[i]);
	}
}

bool pass(int a[], int cnt)
{
	int i, sum = 0, avg;

	for (i = 0; i < cnt; i++)
	{
		if (a[i] < 40) return false;
		sum += a[i];
	}

	avg = sum / cnt;

	if (avg < 60) return false;

	return true;
}

int main()
{
	int score[3];
	input(score, 3);

	if (pass(score, 3)) 
	{
		printf("축하합니다. 합격입니다.");
	}
	else
	{
		printf("죄송합니다. 불합격입니다.");
	}

	return 0;
}
