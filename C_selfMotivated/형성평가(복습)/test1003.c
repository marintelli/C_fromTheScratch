//3번 

 

#include <stdio.h> 

  

int main() 

{ 

int num1, num2; 

int fibo[10]; 

scanf(" %d%d", &num1, &num2); 

  

fibo[0] = num1; 

fibo[1] = num2; 

  

for (int i = 2; i < 10; i++) 

{ 

fibo[i] = fibo[i - 1] + fibo[i - 2]; 

} 

  

for (int i = 0; i < 10; i++) 

{ 

printf("%d ", fibo[i] % 10); 

} 

return 0; 

} 
