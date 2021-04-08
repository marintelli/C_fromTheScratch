#include <stdio.h>

void swap(int n1, int n2)
{

    int temp = n1;
    n1 = n2;
    n2 = temp;
    printf("n1 n2 : %d %d \n", n1, n2);

}

int main(void)
{
    int num1 = 10;
    int num2 = 20;

    printf("num1 num2 : %d %d \n", num1, num2);

    swap(num1, num2); // num1, num2 가 바뀔 것을 기대하면 안되는 것 알지요? 
    printf("num1 num2 : %d %d \n", num1, num2);



    return 0;
}