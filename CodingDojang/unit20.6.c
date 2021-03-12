#include <stdio.h>

int main()
{
    int num1 = 27;

    printf("%d\n", num1 > 10 );
    printf("%d\n", num1 != 5);
    printf("%d\n", num1 >= 27);
    printf("%d\n", num1 < 30); 
    printf("%d\n", num1 <= 27);   


    float num2 = 1.2f;
    float num3;
 
    printf("%f\n", num2 > 2.0f ? 3.0f : 4.0f);
 
    return 0;

}