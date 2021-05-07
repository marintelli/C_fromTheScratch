
// 자가진단 1502

#include <stdio.h>
#include <string.h>
int main()
{

	int i, len;
	int x = 0, y = 0;
	char st[50];
	char word[25][50];

	fgets(st, 50, stdin);
	len = strlen(st);

	while (st[len - 1] == '\n' || st[len - 1] == '\r')
		st[--len] = '\0';

	for ( i = 0; i < len ; i++)
	{
		if (st[i] == ' ') {
			word[x][y] = '\0';
			x++;
			y = 0;
		}
		else
		{
			word[x][y] = st[i];
			y++;
		}
	}


	word[x][y] = '\0';
	x++;

	/*
	* i \0 0 0 0 0 0 0 0
	* l i k e \0 0 0 0 0
	* y o u \0 0 0 0 0 0 
	* 0 0 0 0 0 0 0 0 0
	*/


	for ( i = 0; i < x; i += 2)
	{
		printf("%s \n", word[i]);
	}
	return 0;

}
