#include <stdio.h>

int main()
{
    int num1 = 123;
    int *numPtr1; //단일 포인터 선언
    int **numPtr2; // 이중 포인터 선언

    numPtr1 = &num1; // num1 의 메모리 주소저장
    numPtr2 = &numPtr1; // numPtr1의 메모리 주소 저장

    printf("%d\n", **numPtr2);
     // 20: 포인터들 두 번 역참조하여 num1의 메모리 주소에 접ㄱㄴ
    
    return 0;

}

/* 
포인터도 실제로는 변수이기 때문에 메모리 주소를 구할 수 있습니다.
하지만 포인터의 메모리 주소는 일반 포인터에 저장할 수 없고, int **numPtr2; 처럼
이중 포인터에 저장합니다. int **numPtr2; 를 영어로 읽으면 pointer to poiunter to int가
됩니다. 

여기서 이중 포인터 numPtr2를 끝까지 따라가서 실제 값으 가져오려면 
**numPtr2 처럼 변수앞에 " * " 를 두번 사용하면 됩니다. 

*/