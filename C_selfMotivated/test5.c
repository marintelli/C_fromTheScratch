#include <stdio.h>

int main()
{
	// 1번


	printf("1번, 두 개의 정수를 입력받아 큰 수에서 작은 수를 뺀 차르 출력하시오.\n");


	int a, b;
	scanf("%d%d", &a, &b);

	if (a >= b)
	{
		printf("%d", a - b);
	}
	else
	{
		printf("%d", b - a);
	}

	// 2번

	printf("2번, 정수를 입력받아 0이면 zero, 양수이면 plus, 음수이면 minus라고 출력하시오. \n");
	

	int num;

	scanf("%d", &num);

	if (num == 0) 
	{
		printf("zero\n");
	}
	else if (num > 0)
	{
		printf("plus\n");
	}
	else if (num < 0)
	{
		printf("minus\n");
	}

	// 3번

	printf("3. 연도를 입력받아 윤년인지 평년인지 판단하는 프로그램을 작성하시오. \n");

	int num2;

	scanf("%d", &num2);

	
	return 0;
}
