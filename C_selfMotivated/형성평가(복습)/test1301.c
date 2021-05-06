#include <stdio.h>



#include <stdio.h>

void recursive(int n)
{
    if (n < 1) return; // 종료조건
    recursive(n/2);
    printf("%d ", n);
    
}


int main()
{
    int N;
    scanf("%d", &N);
    if(N <= 100) recursive(N);
    return 0;
}
