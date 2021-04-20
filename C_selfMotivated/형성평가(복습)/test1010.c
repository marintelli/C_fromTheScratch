#include <stdio.h>


int main()
{
	char Bigalpha[3][5];


	for (int i = 0; i < 3; i++)
	{
		for (int k = 0; k < 5; k++)
		{

			scanf(" %c", &Bigalpha[i][k]);

		}
	}


	for (int i = 0; i < 3; i++)
	{
		for (int k = 0; k < 5; k++)
		{

			printf(" %c", Bigalpha[i][k]+ 32);

		}

		printf("\n");

	}
	return 0;
}
