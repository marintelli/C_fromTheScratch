/*
#include <stdio.h>

int N ;

struct data
{
    char name[20];
    int score;
    int rank;
    
} grade[100];


void input()
{
    FILE *in = fopen("input.txt", "r");
    for(N = 0; ;N++){
        if(fscanf(in, "%s %d", &grade[N].name, &grade[N].score) < 2){
            break;
        }
    }
    fclose(in);
}


void sort()
{
    int i, j;
    struct data tmp;
    
    for(i = 0; i< N -1; i++){
        for (j = i + 1; j < N ; j++) {
            if(grade[i].score < grade[j].score){
                tmp = grade[i];
                grade[i] = grade[j];
                grade[j] = tmp;
            }
        }
    }
    
    grade[0].rank = 1;
    
    for (i = 1; i < N; i++) {
        if(grade[i].score == grade[i-1].score){
            grade[i].rank = grade[i-1].rank;
        } else {
            grade[i].rank = i + 1;
        }
    }
}


void output()
{
    FILE *out = fopen("output.txt", "w");
    
    fprintf(out, " 이름  점수  등수 \n");
    
    for(int i = 0 ; i < N ; i++){
        fprintf(out, "%s %4d %4d \n", grade[i].name, grade[i].score, grade[i].rank);
    }
    fclose(out);
    
}

int main()
{
    
    input();
    sort();
    output();
    
    return 0;
}


*/


#include <stdio.h>

int N ;

struct data
{
    char name[20];
    int score;
    int rank;
    int readOrder;
    
} grade[100];


void input()
{
    FILE *in = fopen("input.txt", "r");
    for(N = 0; ;N++){
        if(fscanf(in, "%s %d", &grade[N].name, &grade[N].score) < 2){
            break;
        }
        
        grade[N].readOrder = N;
        
    }
    fclose(in);
}


void sort()
{
    int i, j;
    struct data tmp;
    
    for(i = 0; i< N -1; i++){
        for (j = i + 1; j < N ; j++) {
            if(grade[i].score < grade[j].score){
                tmp = grade[i];
                grade[i] = grade[j];
                grade[j] = tmp;
            }
        }
    }
    
    grade[0].rank = 1;
    
    for (i = 1; i < N; i++) {
        if(grade[i].score == grade[i-1].score){
            grade[i].rank = grade[i-1].rank;
        } else {
            grade[i].rank = i + 1;
        }
    }
}

void readOrdersort()
{
    int i, j;
    struct data tmp;
    
    for(i = 0; i< N -1; i++){
        for (j = i + 1; j < N ; j++) {
            if(grade[i].readOrder > grade[j].readOrder){
                tmp = grade[i];
                grade[i] = grade[j];
                grade[j] = tmp;
            }
        }
    }
    
}


void output()
{
    FILE *out = fopen("output.txt", "w");
    
    fprintf(out, " 이름  점수  등수 \n");
    
    for(int i = 0 ; i < N ; i++){
        fprintf(out, "%s %4d %4d \n", grade[i].name, grade[i].score, grade[i].rank);
    }
    fclose(out);
    
}

int main()
{
    
    input();
    sort();
    readOrdersort();
    output();
    
    return 0;
}
