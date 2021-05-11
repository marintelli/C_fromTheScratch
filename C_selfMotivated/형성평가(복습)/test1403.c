
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    
    
    char ch[101];
    int i, len, k =0;
    char str[101];
    
    scanf("%s", &ch);
    
    len = strlen(ch);
    
    for (i = 0 ; i < len; i++)
    {
        if(isalpha(ch[i]) || isdigit(ch[i]))
        {
                str[k]= tolower(ch[i]);
                k++;
        }
    }
    
    
    printf("%s \n", str);
    
    
}
