// 자가진단 1503

#include <stdio.h>
#include <string.h>

int main()
{
	int i, len, flag = 0;
	char ch[21];
	char word[11][20];
	

	for ( i = 0; i < 11; i++)
	{
		scanf("%s", word[i]);
	}
	

	for ( i = 0; i < 10; i++)
	{
		len = strlen(word[i]); // i열의 길이를 측정
		
		if (word[i][len -1] == word[10][0])
		{
			printf("%s\n", word[i]);
		}
	}

	return 0;

}
