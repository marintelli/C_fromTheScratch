
//1605
#include <stdio.h>
#include <string.h>

struct score
{
    char name[20];
    int score[4];
    
} st[10];


void input(int n)
{
    for (int i = 0 ; i< n ; i++) {
        scanf("%s%d%d%d",st[i].name, &st[i].score[0], &st[i].score[1], &st[i].score[2]);
        st[i].score[3] = st[i].score[0] + st[i].score[1] + st[i].score[2];
    }
    
}

void sort(int n)
{
    struct score tmp;
    
    for (int i = 0 ; i < n -1  ; i++) {
        for (int j = i+1 ; j < n ; j ++) {
            if(st[i].score[3] < st[j].score[3])
            {   tmp = st[i];
                st[i] = st[j];
                st[j] = tmp;
            }
        }
    }
}


void output(int n)
{
    for (int i =0 ; i < n ; i++) {
        printf("%s", st[i].name);
        
        for (int j= 0; j < 4; j++) {
            printf(" %d ", st[i].score[j]);
        }
        printf("\n");
    }
}

int main()
{
    int num;
    scanf("%d", &num);
    input(num);
    sort(num);
    output(num);
    
    return 0;
}
