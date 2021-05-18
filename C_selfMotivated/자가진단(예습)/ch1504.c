
//1504

#include <stdio.h>
#include <string.h>


int main()
{
    char st1[50];
    char st2[50];
    
    
    fgets(st1,50,stdin);
    
    strcpy(st2, st1);
    
    printf("%s \n", st2);
    
}

