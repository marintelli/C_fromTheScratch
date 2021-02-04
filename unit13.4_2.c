#include <stdio.h>

int main()
{
    int num1 = 2;
    int num2 = 2;
    int num3;
    int num4;

    num3 = ++num1;    // num1의 값을 1 증가시킨 뒤 num3에 할당
    num4 = --num2;    // num2의 값을 1 감소시킨 뒤 num4에 할당


    printf("%d %d\n", num1, num2);
    printf("%d %d\n", num3, num4);    // 3 1

    return 0;
}

/*
++, -- 증감연산자가 먼저 앞에 있으면 먼저 
감산을 먼저 해주고 할당해준다. 

num3 = ++num1;
num1 = num1 + 1; // num1 + 1 계산 후 
num3 = num1 // num1 값 3을 num3에 할당
*/