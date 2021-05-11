#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    
    int len, cnt = 1;
    char str[101];
    
    fgets(str, 101, stdin);
    len = strlen(str);
    

    printf("%d. ", cnt);
    
    for(int i = 0 ; i < len ; i++)
    {
        printf("%c", str[i]);
        if(str[i] == ' ') {
            
            printf("\n%d. ", ++cnt);
        }
    }
                 
    return 0;
}


