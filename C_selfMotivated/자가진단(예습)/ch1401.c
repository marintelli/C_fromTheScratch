#include <stdio.h>


int main()
{
    int ch;
    while(1)
    {
        printf("ASCII code =? ");
        scanf("%d", &ch);
        if(33 > ch || ch > 127) break;
        printf("%c \n", ch);
    }
    
    return 0 ;
}
