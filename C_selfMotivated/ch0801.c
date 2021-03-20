#include <stdio.h>

int main(){

    int limit;
    int sum = 0;
    int i;
    scanf("%d", &limit);
    for(i = 0 ; ; i ++){ 
        sum += i ;
        if(sum > limit) break;
    }

    printf("%d %d ", i, sum);


    return 0;
}