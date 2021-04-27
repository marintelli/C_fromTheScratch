
#include <stdio.h>

void num(int n)
{
    if (n <= 0) return; // 종료조건
    printf("%d\n", n);
    num(n -1);

    
}


int main()
{
    int N;
    scanf("%d", &N);
    num(N);
    return 0;
}
