//1702

#include <stdio.h>

int main()
{

	int num;
	int* pi = &num;
	
	scanf("%d", pi);

	for (int i = 0; i < num; i++)
	{
		printf("*");
	}




	return 0;
}
