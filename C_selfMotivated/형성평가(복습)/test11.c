 //1번. '@'문자를 개 출력하는 함수를 작성한 후 함수를 세 번 호출하여 아래와 같이 출력하는 프로그램을 작성 

#include <stdio.h>

void line()
{
	puts("@@@@@@@@@@");

}

int main()
{


	puts("first");

	line();

	puts("second");

	line();

	puts("thrid");

	line();




	return 0;
}


// 2번. 1부터 전달받은 수까지의 합을 출력하는 함수를 작성하고 1000 이하의 
// 자연수를 입력받아 작성한 함수로 전달하여 출력하는 프로그램을 작성하시오.

#include <stdio.h>


	void sumToNum (int su)
	{
		int sum = 0;
		for (int i = 0; i <=su; i++)
		{
			sum += i;
		}
		
		printf("%d", sum);
	}
	

	int main()
	{
		int num;

		scanf("%d", &num);
		if (num <= 1000) sumToNum(num);

		return 0;
	}


// 3번 자연수를 입력받아 아래와 같은 사각형을 출력하는 프로그램을 작성하시오(출려부는 함수로)

# include<stdio.h>


	void output(int n)
	{
		int num = 1;

		for (int i = 1; i <=n; i++)
		{
			for (int j = 1; j <=n; j++)
			{
				printf("%d ", num++);
			}
			printf("\n");
		}
	}

	int main()
	{

		int input;

		scanf("%d", &input);

		output(input);


		return 0;
	}


//4. 두 개의 정수를 입력받아 큰 수의 제곱을 뺀 결과값을 출력하는 프로그램을 작성하시오
//(두 정수를 전달받아 제곱의 차를 리턴하는 함수를 이용할 것)

#include<stdio.h>


int cha(int a, int b)
{
	int cha;
	if (a >b) cha =a* a - b * b;
	if (a < b) cha =	b* b - a * a;

	return cha;
}

int main()
{
	int x, y;
	scanf("%d%d", &x, &y);

	printf("%d", cha(x, y));

	return 0;
}


// 5번.3명 학생의 3과목 점수를 입력받아 각 과목별, 학생별 총점을 출력하는 구조화된 프로그램을 작성하시오.

#include <stdio.h>


void input(int arr[4][4])
{

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			scanf("%d", &arr[i][j]);
			arr[i][3] += arr[i][j];
			arr[3][j] += arr[i][j];
			arr[3][3] += arr[i][j];
		}
	}
}



void output(int arr[4][4])
{

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}

}

int main()
{
	int arr[4][4] = { 0 };
	

	input(arr);
	output(arr);



	return 0;
}



