//1601

#include <stdio.h>
#include <string.h>

struct contact
{
    char name[20], tel[30], addr[40];
};


int main()
{
    struct contact ex;
    
    scanf("%s %s %s", ex.name, ex.tel, ex.addr);
    printf("name : %s \ntel : %s \naddr : %s \n", ex.name, ex.tel, ex.addr);
    
    
    return 0;
    
}
