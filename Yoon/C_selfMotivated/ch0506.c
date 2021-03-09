#include <stdio.h>

int main()
{
printf("세 수를 입력하세요. ");
int x,y,z;
scanf("%d %d %d\n", &x,&y,&z);

if (x > y && x > z){
    printf("입력받은 수 중에  %d가 가장 큰 수 입니다. \n", x);
}
if (y > x && y > z){
    printf("입력받은 수 중에  %d가 가장 큰 수 입니다. \n", y);
}
if (z > x && z > y){
    printf("입력받은 수 중에  %d가 가장 큰 수 입니다. \n", y);
}
    return 0;
}