#include <stdio.h>



void swapreference(int &x, int &y)
{
	int value1, value2;

		if (x > y)
		{ 
			value1 = x / 2;
			value2 = y * 2;

			printf("%d%d", value1, value2);
		}
		else if (y > x)
		{
			value1 = y / 2;
			value2 = x * 2;

			printf("%d  %d", value2, value1);
		}
		else printf(" 두 수는 같습니다. ");

}

int main()
{
	int a, b;

	printf("두 수를 입력하세요. ");
	scanf("%d%d)", &a, &b);
	
	swapreference(a, b);


	return 0;

}
