//1703

#include <stdio.h>
#include <stdlib.h>

int main()
{

	int* p1 = new int;
	int* p2 = new int;
	int* p3 = new int;

	scanf("%d %d", p1, p2);

	*p3 = (p1 > p2) ? abs(*p1 - *p2) : abs(*p2 - *p1);

	printf("%d", *p3);

	delete p1;
	delete p2;
	delete p3;


	return 0;
}
