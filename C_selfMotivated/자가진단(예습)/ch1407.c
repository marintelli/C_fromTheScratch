#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int i, len ;
    char st[101];
    
    char bigst[100] = {0};
    int k = 0;
    
    scanf("%s", st); // 문자열에는 & 불필요
    len = strlen(st);
    
    for (i = 0; i < len; i ++) {
        if(isalpha(st[i]))
        {
            bigst[k] = toupper(st[i]);
            k++;

        }
    }
    
    printf("%s \n", bigst);
    
    return 0;
}
