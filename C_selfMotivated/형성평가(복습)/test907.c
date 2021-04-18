// 7번 

 

#include <stdio.h> 

  

int main() 

{ 

int max = 0, min = 1000; 

int arr[100];  

  

for (int i = 0; i < 100; i++) 

{  

scanf("%d", &arr[i]); 

if (arr[i] == 999) break; 

if (arr[i] < min) min = arr[i]; 

if (arr[i] > max) max = arr[i]; 

  

  

} 

  

printf("max : %d \n", max); 

printf("min : %d \n ", min); 

  

  

return 0; 

} 
