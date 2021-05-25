
//1602
#include <stdio.h>
#include <string.h>

struct contact
{
    char name[20], tel[30], addr[40];
} ex[3];

void input()
{
    for (int i = 0; i < 3 ; i++) {
        scanf("%s %s %s", ex[i].name, ex[i].tel, ex[i].addr);
    }
    
}

void output()
{
        printf("name : %s\ntel : %s\naddr : %s \n", ex[0].name, ex[0].tel, ex[0].addr);
}


void sort()
{
    struct contact tmp;
    
    for (int i = 0 ; i < 2; i++) {
        for (int j = i + 1 ; j < 3; j++ ) {
            if(strcmp(ex[i].name, ex[j].name) > 0 ) {
                tmp = ex[i];
                ex[i] = ex[j];
                ex[j] = tmp;
            }
                    
                        
        }
    }
}



int main()
{


    input();
    sort();
    output();
    
    
    return 0;
    
}

