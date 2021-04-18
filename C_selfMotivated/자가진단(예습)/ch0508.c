#include <stdio.h>

int main()
{
    int score;
    printf("점수를 입력하세요. ");
    scanf("%d\n", &score);

    switch(score / 10)
    {
        case 9:
        printf("A\n");
        break;
        
        case 8:
        printf("B\n");
        break;

        case 7:
        printf("C\n");
        break;

        case6:
        printf("D\n");
        break;

        case5:
        printf("F\n");
        break;
    }
    return 0;
    
}