#include <stdio.h>

// 1 2 2 4 8 32 56 92
int arr[50] ={0, 1, 2};

int recursion(int n)
{
    
    if (arr[n] == 0) arr[n] = (recursion(n - 1) * recursion(n- 2)) % 100 ;
    return arr[n];
}


int main()
{
    int N;
    scanf("%d", &N);
    printf("%d \n", recursion(N));
    return 0;
}
