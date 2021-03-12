#include <stdio.h>
 int main()
 {
     int *numPtr ; // pointer var declared
     int num1 = 10 ; // num1 initialized by 10

     numPtr = &num1;

    printf("%p\n", numPtr);
    printf("%p\n", &num1); 
    
     return 0;
 }
 