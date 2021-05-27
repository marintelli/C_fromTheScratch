#include <stdio.h>


int main()
{
    int num;
    int *ptr = &num;
    
    scanf("%d", ptr);
    printf("%p %d", ptr, *ptr);
    
    
    return 0;
}
