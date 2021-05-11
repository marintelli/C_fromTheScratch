#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    
    
    char ch[101];
    int i, len, k;
    char str[101];
    
    scanf("%s", &ch);
    len = strlen(ch);
    
    scanf("%d", &k);
    
    for(i = len -1 ; i > len - 1 - k  ; i--)
    {
        printf("%c\n", ch[i]);
    }
    
    return 0;
}
