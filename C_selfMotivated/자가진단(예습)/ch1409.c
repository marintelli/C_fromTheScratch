#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int i,j,len ;
    char word[101];
    char tmp;
    
    scanf("%s", word);
    len = strlen(word);
    
    for (i=0; i <len; i++) {
        tmp = word[len-1];
        for (j= len - 1 ; j>0; j--) {
            word[j] = word[j-1];
        }
        word[0] = tmp;
        printf("%s \n", word);
    }
   
    return 0;
}
