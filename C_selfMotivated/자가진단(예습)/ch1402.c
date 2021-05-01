
// 문자열을 입력받은 뒤 그 문자열을 이어서 두 번 출력하는 프로그램을 작성하시오.
#include <stdio.h>


int main()
{
    char str[50];
    
    scanf("%s", str);
    // 문자열의 경우는 배열의 이름 자체가 배열의 첫번째 인덱스 주로는 가리키는 상수형 포인터
    // 문자열의 경우, 문자들을 한꺼번에 받아서 str배열에 차례로 저장하고 끝에는 널값(\0)을 넣어준다.
    // 컴퓨터는 널값을 기준으로 구분하여 문자열을 완성 시킨다.
    printf("%s%s \n", str, str);
    
    return 0 ;
}
