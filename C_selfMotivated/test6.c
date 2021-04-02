#include <stdio.h>

int main()
{
	// 1번.

	printf("정수를 입력받아 1부터 입력받은 정수까지를 차례대로 출력하는 프로그램을 작성하시오.\n");

	int num, x = 1;
	scanf("%d", &num);

	while(x <= num)
	{
		printf("%d ", x);
		x++;
	}

	//. 2번

	printf("\n 정수를 입력받다가 0이 입력되면 그 때까지 입력받은 홀수의 개수와 짝수의 개수를 출력하는 프로그램을 작성하시오. \n");

	int x2, odd = 0, even = 0;

	while (1)
	{
		scanf("%d", &x2);
		(x2 % 2 == 0) ? even++ : odd++;
		if (x2 == 0) break;
	}

	printf("odd : %d \n", odd);
	printf("even : %d \n", even);

	// 3.번

	printf("\n 0부터 100까지의 점수를 계속 입력받다가 범위를 벗어나는 수가 입력되면 그 이전까지 입력된 자료의 합계와 평균을 출력하시오\n");
	printf("(평균을 반올림하여 소수 첫 째자리까지 출력한다.)\n");


	int x3, cnt3 = 0, sum3 = 0;
	double avg3;

	while (1)
	{
		scanf("%d", &x3);
		if ((x3 > 100) || (x3 < 0)) break;
		sum3 += x3;
		cnt3++;
	}

	avg3 = (double)sum3 / cnt3;

	printf("sum : %d\n", sum3);
	printf("avg : %.1f\n", avg3);
 
	//4번.

	printf("\n 0이 입력될 때까지 정수를 계속 입력받아 3의 배수와 5의 배수를 제외한 수들의 개수를 출력하는 프로그램을 작성하시오.\n");

	int x4, cnt4 = 0, temp = 0 ;

	while (1)
	{
		scanf("%d", &x4);
		if (x4 == 0) break;
		(x4 % 3 == 0 || x4 % 5 == 0) ? temp++ : cnt4++;

	}

	printf("%d \n", cnt4);

	//5번. 

	printf(" 삼각형의 밑변길이와 높이를 입력받아 넓이를 출력하고, Continue? 에서 Y나 y를 입력하면 작업을 반복하고 \n");
	printf(" 다른 문자를 입력하면 종료하는 프로그램을 작성하시오.\n");

	int Base, Height;
	char yes;
	double width;

	do {
		printf("Base = ");
		scanf("%d", &Base);
		printf("Height =");
		scanf("%d", &Height);
	
		width = (double)Base * Height / 2;
		printf("Triangle width = %.1lf", width);

		printf("\nContinue? ");
		scanf(" %c", &yes);

	} while ((yes == 'y') || (yes == 'Y'));


	return 0;
}
