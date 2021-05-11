

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    
    
    char ch1[101], ch2[101];
    int len;
 
    
    scanf("%s %s", &ch1, &ch2);

    len = (strlen(ch1) > strlen(ch2))? strlen(ch1) : strlen(ch2) ;
    
    printf("%d \n", len);
    
    
}
