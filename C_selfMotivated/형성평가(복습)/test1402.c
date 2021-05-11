//1402

#include <stdio.h>


int main()
{
    char str[50];
    
    scanf("%s", str);

    for (int i = 0; i < 5; i++) {
        printf("%c", str[i]);
    }

    printf("\n");
    
    return 0 ;
}
