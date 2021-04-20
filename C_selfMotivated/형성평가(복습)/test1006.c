// 6 번 

#include <stdio.h> 

  

  

int main() 

{ 

int i, j; 

  

int a[6][7] = { {0,1,0,1,0,1,0} }; 

  

  

for (int i = 1; i < 5;i++) 

{ 

for (int j = 1; j < 6;j++) 

{ 

a[i][j] = a[i - 1][j - 1] + a[i - 1][j + 1]; 

  

}  

} 

  

  

for ( i = 0; i < 5 ; i++) 

{ 

for (int j = 1; j < 6; j++) 

{ 

printf("%2d", a[i][j]); 

  

} 

printf("\n"); 

} 

  

return 0; 

} 
