//8번 

 

#include <stdio.h> 

  

int main() 

{ 

int i, j, cnt = 0; 

int arr[5][3] = { 0, }; 

  

  

for (i = 0; i < 4; i++) 

{ 

for (j = 0; j < 2; j++) 

{ 

scanf("%d,", &arr[i][j]); 

arr[i][2] += arr[i][j]; 

arr[4][j] += arr[i][j]; 

arr[4][2] += arr[i][j]; 

} 

} 

  

for (i = 0; i < 4; i++) 

{ 

printf("%2d ", arr[i][2] / 2); 

} 

  

printf("\n%2d %2d\n", arr[4][0] / 4, arr[4][1] / 4); 

printf("%2d", arr[4][2] / 8); 

  

return 0; 

} 

 
