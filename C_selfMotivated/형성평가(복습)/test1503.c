//1503

#include <string.h>
#include <stdio.h>

int main()
{
    char arr[100][100];
    int cnt = 0;
    
    for (int i = 1; i < 100; i++) {
        scanf("%s", arr[i]);
        
        if(strcmp(arr[i], "0") == 0) break;
        cnt ++;
        
    }
    
    for (int i = 1 ; i< cnt; i +=2) {
        
        
        printf("%d\n", cnt);
        printf("%s\n", arr[i]);

    }

    
    return 0;
}
