#include <stdio.h>

int main()
{
    int num,cnt,i;

    for(i = 0, cnt =0; i < 10 ; i++){

    scanf("%d", &num);
    if(num % 2 == 0) cnt++;

    }

    printf("입력받은 짝수는 %d개입니다.", cnt);
    return 0;
}