#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int i, len ;
    char st[101];
    int cnt = 1;

    fgets(st, 101, stdin);
    len = strlen(st);
    
    while(st[len -1] == '\n' || st[len -1] == '\r')
          st[--len] = '\0';
    
    for (i = 0; i < len ; i++) {
        if(st[i] == ' ') cnt++; // 공백만나면 단어개수 증가
        
    }
    
    printf("%d \n", cnt);
    
    return 0;
}
