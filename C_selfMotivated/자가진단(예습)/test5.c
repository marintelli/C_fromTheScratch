#include <stdio.h>

int main()
{
	// 1번


	printf("1번, 두 개의 정수를 입력받아 큰 수에서 작은 수를 뺀 차르 출력하시오.\n");


	int a, b;
	scanf("%d%d", &a, &b);

	if (a >= b)
	{
		printf("%d\n", a - b);
	}
	else
	{
		printf("%d\n", b - a);
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

	if (((num2 % 400) == 0) || (((num2 % 4) == 0) && ((num2 % 100) != 0))) {
		printf("leap year\n");
	}
	else
	{
		printf("common year\n");
	}
	// 4번
	
	printf("1번은, 개 2번은 고양이 3번은 병아리로 정하고 번호를 일렵하면 해당하는 동물을 영어로 출력하시오. \n");

	int inputNumber;
	printf("Number? ");
	scanf("%d", &inputNumber);

	switch (inputNumber)
	{
	case 1:
		printf("dog\n");
		break;
	case 2:
		printf("cat\n");
		break;
	case 3:
		printf("chick\n");
		break;
	default:
		printf("I don't know\n");
	}

	//5번.

	printf("1~12사이의 정수르 입력받아 평년의 경우 입력받은 월의 날 수를 출력하는 프로그램을 작성하시오.\n");

	int oneToTwelve;
	scanf("%d", &oneToTwelve);

	switch (oneToTwelve) {
	case 2:
		printf("28\n");
		break;
	case 1: case 3: case 5: case 7: case 8: case 9:
		printf("31\n");
		break;
	default:
		printf("30\n");

	}

	return 0;
}
