// 9번 

 

#include <stdio.h> 

  

int main() 

{ 

int cnt; 

  

int arr[100]; 

  

  

// 입력 

  

for (int i = 0; i < 100; i++) 

{ 

  

scanf("%d", &arr[i]); 

  

cnt = i; 

  

if (arr[i] == 0) break; 

} 

  

  

// 연산 

  

for (int i = 0; i < cnt; i++) 

{ 

(arr[i] % 2 == 0) ?  arr[i] /= 2 : arr[i] *= 2;  

} 

  

//출력 

  

printf("%d\n", cnt);  

  

for (int i = 0; i < cnt; i++)  

{ 

printf("%d ", arr[i]); 

} 

  

return 0; 

} 
