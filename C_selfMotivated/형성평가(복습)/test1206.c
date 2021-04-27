//6번 

#include <stdio.h> 

#define N 7 // 자료의 개수는 7개 

#define SWAP(x, y) {int z= x; x = y; y = z;} 

  

void input(int a[]) 

{ 

        int i; 

        for (int i = 0; i < N; i++) 

        { 

                scanf("%d", &a[i]); 

        } 

} 

  

void sort(int a[]) 

{ 

        for (int i = 1; i < 4; i++) // 1부터 3까지 3번 정렬 

        { 

                for (int j = 0; j < N-1 ; j++)  

                { 

                        if (a[j] > a[j + 1]) 

                        { 

                                SWAP(a[j], a[j + 1]); 

                        } 

                } 

        } 

} 

  

void output(int a[]) 

{ 

        for (int i = 0; i < N; i++) 

        { 

                printf("%d ", a[i]); 

        } 

} 

  

int main() 

{ 

        int arr[N]; 

  

        input(arr); 

        sort(arr); 

        output(arr); 

  

        return 0; 

}       output(arr); 

  

        return 0; 

} 

 
