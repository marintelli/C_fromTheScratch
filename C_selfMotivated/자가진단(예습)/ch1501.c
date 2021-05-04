#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int i;
    char strarr[5][30];
    
    for (i =0 ; i < 5; i++) {
        scanf("%s", strarr[i]);
    }
    
    for (i = 5 ; i >= 0; i--) {
        printf("%s \n", strarr[i]);
    }
    return 0;
}
