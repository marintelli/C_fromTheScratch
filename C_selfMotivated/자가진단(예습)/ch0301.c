#include <stdio.h>

// 두 개의 정수를 입력받아 다음과 같이 출력하는 프로그램을 작성하시오.

int main()
{
    int x,y;
    printf(" 두 개의 수를 입력하시오. ");
    scanf("%d %d", x, y);

    printf("%d + %d = %d\n", x, y, x + y);
    printf("%d - %d = %d\n", x, y, x - y);
    printf("%d * %d = %d\n", x, y, x * y);
    printf("%d / %d = %d\n", x, y, x / y);
    printf("%d %% %d = %d\n", x, y, x % y);
    // '%'는 바로 뒤의 문자열과 합쳐져서 자료의 형을 나타내기 위한 문자로 사용된다. 만양 문자를 화면에 출력하려면%%로 나타낸다.

    
    return 0;
}

