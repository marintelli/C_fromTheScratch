//2번 

 

#include <stdio.h> 

  

int main() 

{ 

int num; 

int i, j; 

int count[11] = { 0 }; 

  

for (; ; ) 

{ 

scanf("%d", &num); 

  

if (num == 0) break; 

count[num / 10]++; 

  

} 

  

for (i = 10; i >= 1; i--) 

{ 

if (count[i] > 0) 

{ 

printf("%d : %d person \n", i * 10, count[i]); 

} 

} 

  

return 0; 

} vvvvv
