#include <stdio.h>

int main()
{
	char x;
	int characterArr[255] = { 0, };

	while (1) {
		scanf(" %c", &x);
		if (x < 'A' || x > 'Z') break;
		characterArr[x]++;
	}

	for (int i = 'A'; i <= 'Z'; i++) {

		if(characterArr[i] != 0) printf("%c : %d \n", i, characterArr[i]);
	}

	return 0; 
}
