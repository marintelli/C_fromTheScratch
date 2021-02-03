#include <stdio.h>

int main()
{
    const int con1 = 1; // constant define & reset
    const float con2 = 0.1f; // constant define & reset
    const char con3 = 'a'; //constant define & reset

    printf("%d %f %c \n", con1, con2, con3);


    printf("%ld\n", -10L); // long int literal
    printf("%lld\n", -1234567890123456789LL); // long long int literal
    printf("%u\n", 10U); // unsigned int literal
    printf("%lu\n", 123456789UL);// unsigned long int literal
    printf("%llu\n", 12345678901234567890ULL); // unsingned long long literal 

    return 0;

}

/*
constant must be define & reset simuataneously.
*/