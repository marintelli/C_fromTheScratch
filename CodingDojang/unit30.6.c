#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    int i = 1;

    for(;;)
    {
        if(i%10 != 3)
        {
            i++;
            continue;
        }

        if(i > 103)
            break;   

        printf("%d\n", i);
        i++ ;     

    }
    return 0;
}

/*
for 반복문에서 printf 함수로 i의 값을 출력한 뒤 i를 1씩 증가시키고 있습니다.
따라서 printf 함수 윗 부분의 코드를 완성하여 3으로 끝나는 숫자를 출력해야 합니다.

먼저 3으로 끝나는 숫자를 구하려면 i를 10으로 나눈 뒤 나머지가 3인지 검사하면 됩니다.
하지만 if(i % 1 != 3)과 같이  if조건문을 만들어서 3으로 끝나지 않는 숫자일 때
continue로 건너 뜁니다. continue로 건너뛰면 아래에 있는 i++; 까지 
건너 뛰게 되므로 continue 위에 i++;을 넣어주어야 합니다.

for 반복문에서 아무것도 지정되어 있지 않으므로 무한 루프입니다.
따라서 if조건문을 사용하여 i가 103보다 클 때 break로 루프를 중단해줍니다.
여기서 숫자를 출력하는 printf가 아래에 있으므로 irk 103과 같을 때
break로 중단해버리면 103은 출력되지 않스빈다. 
*/