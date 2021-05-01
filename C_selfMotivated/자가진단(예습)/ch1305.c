#include <stdio.h>

int arr[50] ={0, 1, 2};

int recursion(int n)
{
    
    if (arr[n] == 0) arr[n] = recursion(n/2) + recursion(n-1);
    return arr[n];
}


int main()
{
    int N;
    scanf("%d", &N);
    printf("%d \n", recursion(N));
    return 0;
}
