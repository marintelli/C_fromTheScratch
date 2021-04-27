#include <stdio.h>

int fac(int n)
{
    if (n == 1) return 1; // fac(1) == 1 이므로
    return n + fac(n-1);

    
}


int main()
{
    int N;
    scanf("%d", &N);
    printf("%d \n",fac(N));
    return 0;
}
