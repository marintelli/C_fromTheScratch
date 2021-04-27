#include <stdio.h>

void recursive(int n)
{
    if (n < 1) return; // 종료조건
    recursive(n -1);
    printf("recursive\n");
    
}


int main()
{
    int N;
    scanf("%d", &N);
    if(N <= 20) recursive(N);
    return 0;
}
