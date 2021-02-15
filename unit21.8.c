#include <stdio.h>
 //모두 참참참을 출력하도록. 
int main()
{
    int num1 = 10;
    int num2 = 0;
 
 //   if (num1 ①___ num1)
    if (num1 && num1)
        printf("참\n");
    else
        printf("거짓\n");
 
//    if (num1 ②___ num2)
    if (num1 || num2)
        printf("참\n");
    else
        printf("거짓\n");
 
 //   printf("%s\n", !③____ ? "참" : "거짓");
    printf("%s\n", !num2 ? "참" : "거짓");
 
    return 0;
}