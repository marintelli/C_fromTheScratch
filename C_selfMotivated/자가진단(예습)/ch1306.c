#include <stdio.h>

int hap(int n)
{
    if(n <= 0) return 0;
    return hap(n / 10) +  (n % 10)*(n % 10);
}

int main()
{
    int N;
    scanf("%d", &N);
    printf("%d \n", hap(N));
    
    return 0 ;
}
