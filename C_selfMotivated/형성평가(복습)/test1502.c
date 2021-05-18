
//1502

#include <string.h>

int main()
{
    char ch;
    char str[5][50]= {"flower", "rose", "lily","daffodil","azalea" };
    int cnt = 0;
    scanf(" %c", &ch);
    
    for (int i= 0; i<5; i++) {
        if( str[i][1] == ch || str[i][2] == ch)
        {
            puts(str[i]);
            cnt++;
        }
    }
    
    printf("%d\n", cnt);
    
    return 0;
}
