#include <stdio.h>

struct data
{
    char name[20];
    int grade;
} school;

int main()
{
    struct data self = {"Jejuelementary", 6};
        

    scanf("%s %d", school.name, &school.grade);
    
    printf("%s grade in %d School \n", self.name, self.grade);
    printf("%s grade in %d School \n", school.name, school.grade);
    
    
    return 0;
    
}
