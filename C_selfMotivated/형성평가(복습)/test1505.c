//1505

#include <string.h>
#include <stdio.h>

int main()
{
    int i, j;
    char ch;
    int str;
 
    char word[5][100], st[100];
    
    //5개 단어 입력 받기
    for (i=0; i<5; i++ ) {
        
        scanf("%s", word[i]);

    }
    // 문자와 문자열[100] 입력 받기
    scanf(" %c", &ch);
    scanf("%s", st);
    
    
    
    
    for (i=0; i<5; i++) {
        
        if(strchr(word[i], ch) || strstr(word[i], st)) // 문자나 문자열과 같은 것이 있으면 참
        {
            printf("%s\n", word[i]);
        }
    }
    
    return 0;
}
