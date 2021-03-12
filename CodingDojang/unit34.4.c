#include <stdio.h>
 
int main()
{
    long long num1 = 10;
    float num2 = 3.5f;
    char c1 = 'a';
    long long* numPtr1 = &num1;
    float* numPtr2 = &num2;
    char* c1Ptr = &c1;

    printf("%lld\n", *numPtr1);
    printf("%f\n", *numPtr2);
    printf("%c\n", *c1Ptr);

    return 0 ; 
    
}