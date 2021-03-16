#include <stdio.h>

int main()
{
    int score, i, cnt;
    int sum = 0;
    int avrg = 0;

    for( i = 0, cnt = 0 ; i < 5 ; i ++){

        scanf("%d", &score);

        sum += score;
        cnt ++;

    }

    avrg = sum / cnt ;

    printf("총점 : %d\n", sum);
    printf("평균 : %d\n", avrg);
    return 0;
}