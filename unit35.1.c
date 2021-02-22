#include <stdio.h>
#include <stdlib.h>

/*
변수는 스택에 malloc 함수는 힙 메모리에 위치합니다. 
스택,힙의 위치와 커지는 방향은 OS마다 다르다.
변수는 stack, malloc 함수는 heap 에

stack은 할당한 메모리를 해제할 필요없으나,
heap에 할당한 메모리는 항상 해제(free)가 필수.

메모리 해제는 선택사항이 아니라 필수,
실무에서 많은 메모리를 할당하는데
할당만하고 해제하지 않으면 시스템에 메모리가
부족해져서 강제 종료되거나 메모리 할당에 실패되게 됩니다.
메모리를 해제하지 않아 메모리 사용량이 늘어나는 현상을 메모리 누수라합니다. 

*/

int main()
{
    int num1 = 20;
    int *numPtr1;

    numPtr1 = &num1 ;

    int *numPtr2; // Int형 포인트 선언

    numPtr2 = malloc(sizeof(int)); // 4 byte int size 동적 메모리 할당

    printf("%p\n", numPtr1);
    printf("%p\n", numPtr2);

    free(numPtr2); // 동적으로 할당한 메모리 해제

    return 0 ;

}
