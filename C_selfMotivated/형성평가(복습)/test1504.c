//1504 

 
 

#include <string.h> 

#include <stdio.h> 

 
 

int main() 

{ 

    int i, j; 

    int n; 

    scanf("%d", &n); // n개 글자 

     

    char word[n][10], tmp[10]; // 10글자 미만 

     

    for (i=0; i<n; i++ ) { 

        scanf("%s", word[i]); 

    } 

     

    for (i = 0; i < n -1; i++) { // 배열 길이 - 1 만큼 돌면서 

        for (j= i+1; j<n; j++) { 

            if(strcmp(word[i],word[j])>0) // 크면 바꾼다 == 최솟값을 맨앞 인덱스로 

            { 

                strcpy(tmp, word[i]); 

                strcpy(word[i], word[j]); 

                strcpy(word[j], tmp); 

            } 

        } 

    } 

     

     

    for (i=0; i<n; i++) { 

        puts(word[i]); 

    } 

     

    return 0; 

} 
