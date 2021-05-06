#include <stdio.h>


int N, cnt = 0;

int recursion(int n)
{
    if(n == 1) return 1;
    
    if(n % 2 == 0)
    {
        recursion(n/2);
        cnt++;
    } else
    {
        recursion(n/3);
        cnt++;
    }
    
    return cnt;
}


int main()
{

    scanf("%d", &N);
    recursion(N);
    printf("%d \n", cnt);
    
    return 0;
}
