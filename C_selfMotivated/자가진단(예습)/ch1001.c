#include <stdio.h>

int main()
{
	char x;
	int characterArr[255] = { 0, }; //문자의 주소지는 보통 총 255개이므로, 배열에 255칸

	while (1) {
		scanf(" %c", &x); // 
		if (x < 'A' || x > 'Z') break; // A부터 Z를 넘어가면 실행 종료
		characterArr[x]++; // 
	}

	for (int i = 'A'; i <= 'Z'; i++) {

		if(characterArr[i] != 0) printf("%c : %d \n", i, characterArr[i]); 
		// 배열의 숫자가 0이 아닌 경우의 배열을 불러서 프린트해준다.
	}

	return 0; 
}
