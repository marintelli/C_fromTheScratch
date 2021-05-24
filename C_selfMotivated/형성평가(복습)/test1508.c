//1508 

 
 

#include <stdio.h> 

#include <stdlib.h> 

#include <string.h> 

 
 

 
 

int main() 

{ 

 
 

 
 

    char word[100][20]; 

 
 

     

    for (int i = 0; i < 100 ; i++) 

    { 

         

        scanf("%s", word[i]); 

         

        if( word[i][0] == 'E' && word[i][1] == 'N' && word[i][2] == 'D' ) break; 

        // if(word[i] == "END" ) break; 로 종료조건을 설정하고,  END를 입력한 후 디버깅 한 결과 word[i]에는 "END" 가 입력되는데, 왜 반복문은 빠져 나오지 못할까요? 

         

        int len =strlen(word[i]); 

         

         

        for (int j = len - 1; j >= 0; j--) { 

            printf("%c", word[i][j]); 

        } 

         

        printf("\n"); 

    } 

     

 
 

    return 0; 

     

} 

 

 

 
