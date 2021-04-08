#include <stdio.h>
//call by reference
void swap(int *n1, int *n2)
{

    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;


}

int main(void)
{
    int num1 = 10;
    int num2 = 20;

    printf("num1 num2 : %d %d \n", num1, num2);

    swap(&num1, &num2); // 이로 인해 swap의 매개변수 n1,n2는 각각 num1, num2를 가리킨다. 

    printf("num1 num2 : %d %d \n", num1, num2);



    return 0;
}