#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int i, len, k, j;
    char st[101];
    int cnt = 1;

    fgets(st, 101, stdin);
    len = strlen(st);
    
    while(st[len -1] == '\n' || st[len -1] == '\r')
          st[--len] = '\0';
    
    
 
 
while(1)
    {
        if(len == 1) break;
        
        scanf("%d", &j);
        k = (j < len)? j-1 : len -1 ; // 입력받은 값이 문자열 길이보다 크면 길이 반환
        
        for (j = k ; j<len; j++) {
            st[j] = st[j+1]; // 돌면서
        }

        st[len] = '\0';
        len--;
        
        printf("%s\n", st);
    }

    
    return 0;
}
