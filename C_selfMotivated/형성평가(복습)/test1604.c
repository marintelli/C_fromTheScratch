//1604
#include <stdio.h>
#include <string.h>

struct human
{
    double height;
    double weight;
    
} father, mother;


void input()
{
    scanf("%lf %lf", &father.height, &father.weight);
    scanf("%lf %lf", &mother.height, &mother.weight);
    
}


int main()
{
    struct human student;
    
    input();
    
    student.height = (father.height + mother.height) / 2 + 5 ;
    
    student.weight = (father.weight + mother.weight) / 2 - 4.5 ;
    
    printf("height : %dcm\n", (int)student.height);
    printf("weight : %.1fkg\n", student.weight);
}
