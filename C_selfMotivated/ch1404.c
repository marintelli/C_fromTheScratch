#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    
    char ch;
    
    while(1)
    {
    
        ch = getchar();
        getchar();
        
        if(isalpha(ch))
        {
            printf("%c \n", ch);
        } else if(isdigit(ch))
        {
            printf("%d \n", ch);
        }else{
            printf("영문 숫자가 아닙니다. ");
            break;
        }
    }
    
    
    return 0;
}


