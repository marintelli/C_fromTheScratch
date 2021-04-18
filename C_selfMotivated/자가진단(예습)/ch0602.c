#include <stdio.h>

int main()
{
    int num = 1;
    int kum;

    while(num <=10)
    {
        kum += num;
        num++;
    }

    printf("1부터 10까지의 합 = %d\n", kum);
    printf("while문이 끝난 후의 num의 값 = %d\n", num);


    return 0;
}

// 처음에 sum = 0 이 아닌 sum만 선언해주었을 때는 값이 이상했음
// d