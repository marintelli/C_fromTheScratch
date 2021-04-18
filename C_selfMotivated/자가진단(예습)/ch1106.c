#include <stdio.h>

int gesan(int x, int y, char op)
{

	if (op == '+') return x + y; // return 문장을 만나면 함수를 종료하고 호출한 위치로 돌아가므로 break; 
	else if (op == '-') return x - y;
	else if (op == '*') return x * y;
	else if (op == '/')  return x / y;
	else printf(" 올바른 사칙연산 부호를 입력해주세요.");

	

}	

int main()
{
	int a, b;
	char c;

	scanf("%d %c %d", &a, &c, &b);
	
	printf("%d %c %d = %d \n", a, c, b, gesan(a, b, c));

	return 0;

}
