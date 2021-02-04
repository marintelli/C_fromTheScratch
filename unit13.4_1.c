#include <stdio.h>

int main()
{
    int num1 = 2;
    int num2 = 2;
    int num3;
    int num4;

    num3 = num1++;
    num4 = num2--;


    printf("%d %d\n", num3, num4);
    printf("%d %d\n", num1, num2); 


       
    return 0 ; 
}

/*
num3 = num1++
은 두 행을 실행하는 것을 내포한다. 
num3 = num1 ;
num1 = num1 + 1 ;
*/