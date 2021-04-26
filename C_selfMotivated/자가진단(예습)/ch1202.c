#include <stdio.h>

void input(int &month, int &day)
{
	scanf("%d", &month);
	scanf("%d", &day);
}


bool pass(int date[], int month, int day)
{
	if (1 <= day && day <= date[month])
	{
		return true;
	}
	else
	{
		return false;
	}

}

int main()
{
	int m, d;

	input(m,d);

	int date[13] = { 0, 31, 29, 30, 30 ,30 ,31,30, 30, 31, 31, 31 ,31 };


	if (pass(date, m, d))
	{
		printf("OK!");
	}
	else
	{
		printf("Bad!");
	}




	return 0;
}
