//8번 

 

#include <stdio.h> 

  

int main() 

{ 

double avrg; 

int FiveCnt = 0, FiveSum = 0; 

int arr[100];  

  

for (int i = 0; i < 100; i++) 

{ 

scanf("%d", &arr[i]); 

  

if (arr[i] == 0) break; 

  

if (arr[i] % 5 == 0)  

{ 

FiveCnt++; 

FiveSum += arr[i]; 

} 

} 

  

avrg = (double)(FiveSum / FiveCnt); 

  

printf("Multiples of 5 : %d \n", FiveCnt); 

printf("Sum : %d \n", FiveSum); 

printf("avg : %.1f ", avrg); 

  

return 0; 

} 
