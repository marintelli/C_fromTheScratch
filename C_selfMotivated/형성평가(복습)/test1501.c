#include <stdio.h>
#include <string.h>


int main()
{
    int i, len;
    int x = 0, y = 0; char st[50];
    char word[25][50];

    fgets(st, 50, stdin);
    
    len = strlen(st);


    for (i = 0; i < len-1; i++)
    {
        if (st[i] == ' ')
        {
        word[x][y] = '\0';
        x++;
        y=0;
        }
        else
        {
        word[x][y] = st[i];
        y++;
        }
    }
    
    word[x][y] = '\0';
    x++;
    
    
    for (i=x; i>=0; i--) {
        puts(word[i]);
        
    }
    
    return 0;
}
