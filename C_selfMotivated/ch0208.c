// 키와 몸무게 영문 이름의 첫 자를 입력 받아 출력하는 프로그램을 작성하시오
// (몸무게는 반올림하여 소수 첫째자리까지 출력한다.)

#include <stdio.h>

int main()
{
    int height, weight, name;

    printf("키를 입력하세요. ");
    scanf("%d\n", &height);

    printf("몸무게를 입력하세요. ");
    scanf("%lf\n", &weight);
    // 실수 한 개를 입력 받을 때 double 변수를 입력받기 위해서는 %lf를 지정해야한다. 
    // 출력은 %f로 되지만 입력은 바든시 %lf 로 받아야 한다.


    printf("이름을 입력하세요. ");
    scanf(" %c\n", name);

    /*
    ' %c' 앞에 공백을 넣어 준 것에 유의해야 한다. 일반적인 자료형의 경우에는 이전에 입력된
    엔터나 공백문자, 탭문자 등을 입력 구분자로 퍼리하여 무시하지만, 문자형 자료(char)의 경우에는
    모든 문자를 입력을 처리하게 된다. 만약 공백을 생략하게 되면 위에서 weight를 입력 받은 후
    누를 엔터가 버퍼에 저장되어 있다가 위의 입력 명령을 만나면 name에 저장 되어 엉뚱한 결과가 출력된다.

    문자형 자료에서 위와 같은 특수문자를 입력 구분자로 처리하기 위하여 %c 앞에는 공백을
    넣어준 것이며 이렇게 하면 버퍼에 저장된 특수문자를 무시하고
    새로운 문자를 입려으로 받게 되는 것이다. 

    */

   printf("키 = %d\n", height);
   printf("몸무게 = %.1f\n", weight);
   printf("이름 = %c \n", name);


    return 0;
}