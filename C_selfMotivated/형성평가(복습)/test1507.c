//1507

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dnum1, dnum2;
    
    char cnum1[11], cnum2[11];
    
    scanf("%s%s", cnum1, cnum2);
    
    
    dnum1 = atoi(cnum1);
    dnum2 = atoi(cnum2);
    

    
    printf("%d", dnum1 * dnum2);
    
}
