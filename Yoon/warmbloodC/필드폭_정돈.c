#include <stdio.h>

int main(void)
{
printf("%-8s, %14s, %5s, \n", "이  름", "전공학과", "학년");
printf("%-8s, %-14s, %5d, \n", "김동수", "수학과", 2);
printf("%-8s, %-14s, %5d, \n", "이을수", "역사학", 1);
printf("%-8s, %-14s, %5d, \n", "한서영", "기계공학", 4);

return 0;
}