#include <stdio.h>
#define jegob(x,y) (x-y)*(x-y)
#define sejegob(x,y) (x+y)*(x+y)*(x+y)

int main()
{
	int a, b, c1, c2;
	scanf("%d%d", &a, &b);
	c1 = jegob(a, b);
	c2 = sejegob(a, b);

	printf("(%d - %d) ^ 2 = %d \n", a, b, c1);
	printf("(%d + %d) ^ 2 = %d \n", a, b, c2);
	
	return 0;
}
