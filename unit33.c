/*
1에서 100까지 출력
3의 배수는 Fizz 출력
5의 배수는 Buzz 출력
3과 5의 공배수는 FizzBuzz 출력
*/

#include <stdio.h>

int main()
{
    int num;
    for( num = 1; num <= 100 ; num ++)
    {
        if (num % 3 == 0 && num % 5 == 0)
            {
                printf("FizzBuzz \n");
            } 
            else if (num % 3 == 0)
            {
                printf("Fizz \n");
            }
            else if (num % 5 == 0)
            {
                printf("Buzz \n");
            } else
            {
                printf("%d\n", num);
            }
        
    }

    return 0;
}