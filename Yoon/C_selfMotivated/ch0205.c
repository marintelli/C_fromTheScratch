#include <stdio.h>

int main()
{
    float yd = 91.44;
    float in = 2.54;

    printf("2.1yd = %5.1fcm\n", 2.1 * yd);
    printf("10.5in = %4.1fcm\n", 10.5 * in);


    return 0;
}

//%3.1f 의 의미는 3 칸을 가지는 데 소수점은 1 자리 
//presentation error? 뭐지?
