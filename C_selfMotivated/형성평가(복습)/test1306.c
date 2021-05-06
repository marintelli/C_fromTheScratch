// 형성평가 1306
#include <stdio.h>

int x, y, z, N;

int recursion(int n)
{
    if(n == 0) return 1 ;
    
    if(n % 10 == 0)
    {
        return recursion(n/10);
    } else
    {
        return recursion(n/10) * (n % 10);
    }
}

int main()
{
    scanf("%d%d%d", &x,&y,&z);
    
    N = x*y*z;
    
    printf("%d \n", recursion(N));
    
    
    return 0;
}
