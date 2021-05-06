#include <stdio.h>

void recur_even(int n)
{
    if (n < 1) return ; // 종료조건
    recur_even(n - 2);
    printf("%d ", n);
    
}

void recur_odd(int n)
{
    if (n < 1) return ; // 종료조건
    recur_odd(n - 2);
    printf("%d ", n);
    
}


int main()
{
    int N;
    scanf("%d", &N);
    
    if(N % 2 == 0) recur_even(N);
    
    if(N % 2 != 0) recur_odd(N);
    
    return 0;
}
