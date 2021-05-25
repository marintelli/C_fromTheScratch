#include <stdio.h>

struct data
{
    char name[20];
    char school[20];
    int grade;
    
};

int main()
{
    struct data self;
        
    scanf("%s", self.name);
    scanf("%s", self.school);
    scanf("%d", &self.grade);
    
    printf("Name : %s \n", self.name);
    printf("School : %s \n", self.school);
    printf("Grage : %d \n", self.grade);
    
    return 0;
    
}
