#include <stdio.h>

int main()
{
    int input;
    int i = 0; int sum = 0;
    double avrg;

    while(1)
    {
        scanf("%d", &input);
        if(input == 0 ) break;
        sum += input;
        i++;
    }
    
    avrg = sum / i;
    printf("sum = %d\n", sum);
    printf("avrg = %f", avrg);

    return 0;
}