#include <stdio.h>

int main()
{
    int a = 0; 
    int b = 1; 
    int c = 2;
    int out1;
    int out2;
    int out3, out4;

    out1 = (a < b) && (b <c);
    out2 = (a &&b) || (b &&c);
    out3 = (a || !c);
    out4 = (a != b ) && (b != c);

    printf("%d %d %d %d", out1, out2, out3, out4);

    return 0;
}