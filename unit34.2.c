#include <stdio.h>
// dereference 역참조 연산자 * 

int main () 
{
    int num1 = 10; //   
    int *numPtr = &num1 ; 

    printf("%d\n", *numPtr);

    *numPtr = 14;
    printf("%d\n", *numPtr);  

    return 0 ;
}