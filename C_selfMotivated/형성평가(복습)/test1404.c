
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    
    
    char ch[101], sh;
    int i, len, k =0;
    char str[101];
    
    scanf("%s %c", &ch, &sh);

    len = strlen(ch);
    
    
    for (i = 0 ; i < len; i++) // 돌면서 입력받은 값이랑 비교
    {
        if(ch[i] == sh)
        {
            k = i;
        }
        
        if(k != 0) break; // k에 i가 할당되면 반복종료
    }
    
    
    printf("%d \n", k);
    
    
}
