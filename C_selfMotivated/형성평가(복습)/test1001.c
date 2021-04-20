// 1번 

#include <stdio.h> 

  

int main() 

{ 

int num; 

int i, j ; 

int count[7] = { 0 }; 

  

for (i = 0; i < 10; i++) 

{ 

scanf("%d", &num); 

  

count[num]++; 

} 

  

for (i = 1; i < 7; i++) 

{ 

printf("%d : %d \n", i, count[i]); 

  

} 

  

return 0;  

  

} 
