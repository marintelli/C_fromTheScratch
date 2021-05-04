#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char ch;
    
    while(1)
    {
        ch = getchar(); // 버퍼의 한 문자를 반환, 반환시 엔터 클릭
        getchar(); // 저장된 버퍼의 엔터는 날림
        
        if(isalpha(ch))
        {
            printf("%c \n", ch);
        } else if (isdigit(ch))
        {
            printf("%d \n", ch);
        } else break;
       
    }
    
    return 0;
}
