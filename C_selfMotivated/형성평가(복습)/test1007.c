//7번 

#include <stdio.h> 

  

  

int main() 

{ 

int i, j; 

  

int a[2][3], b[2][3]; 

  

// 입력 first array 

  

printf("first array \n"); 

for (i = 0; i < 2; i++) 

{ 

  

for (j = 0; j < 3; j++) { 

scanf("%d", &a[i][j]); 

} 

  

} 

  

//입력 second array 

printf("second array \n"); 

  

for (i = 0; i < 2; i++) 

{ 

  

for (j = 0; j < 3; j++) { 

scanf("%d", &b[i][j]); 

} 

} 

  

  

// 같은 인덱스 곱 출력 

  

for (i = 0; i < 2; i++) 

{ 

  

for (j = 0; j < 3; j++) { 

printf("%d ", a[i][j] * b[i][j]); 

} 

printf("\n"); 

} 

  

  

return 0; 

} 
