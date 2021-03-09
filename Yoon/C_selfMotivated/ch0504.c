#include <stdio.h>

int main()
{
    printf("점수를 입력하세요. ");

    int score;

    scanf("%d\n", &score);

    if (score >= 80 && score <= 100 )
    {
        printf("A\n");
    }
        if (score >= 60 && score < 80 )
    {
        printf("B\n");
    }
        if (score >= 40 && score < 60 )
    {
        printf("C\n");
    }
        if (score >= 20 && score < 40 )
    {
        printf("D\n");
    }
        if (score >= 0 && score < 20 )
    {
        printf("F\n");
    }


    return 0;
}