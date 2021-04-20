//4번 

 

#include <stdio.h> 

  

int main() 

{ 

int i, j; 

int arr[4][3] = { {3, 5, 9}, {2, 11, 5}, {8, 30, 10}, {22, 5, 1} }; 

int sum = 0; 

  

for (i = 0; i < 4; i++) 

{ 

for (j = 0; j < 3; j++) 

{ 

printf("%3d,", arr[i][j]); 

  

sum += arr[i][j]; 

} 

  

printf("\n"); 

} 

  

printf(" %d \n", sum); 

  

return 0; 

} 
