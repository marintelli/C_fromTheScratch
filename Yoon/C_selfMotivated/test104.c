#include <stdio.h>

int main()
{
    int kor = 90;
    int mat = 80;
    int eng = 100;
    int avg, sum;

    printf("kor %d\n", kor);
    printf("mat %d\n", mat);
    printf("eng %d\n", eng);
    printf("sum %d\n", (kor+mat+eng));
    printf("avg %d\n", (kor+mat+eng)/3);

    return 0;
}