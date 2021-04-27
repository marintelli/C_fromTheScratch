// 5번 

  

#include <stdio.h> 

#include <math.h> 

  

  

void input(double a[], int n) 

{ 

        for (int i = 0; i < n; i++) 

        { 

                scanf("%lf", &a[i]); 

        } 

} 

  

  

double round(double val) 

{ 

        return floor(val + 0.5); 

} 

  

double avrgs(double a[], int n) 

{ 

        double sum = 0; 

        for (int i = 0; i < n; i++) 

        { 

                sum += a[i]; 

        } 

  

        return (sum / n); 

} 

  

int main() 

{ 

        double arr[3]; 

        double avrg; 

         

        input(arr, 3); 

  

        avrg = avrgs(arr, 3); 

  

        printf("%d \n", (int)round(avrg)); // 평균 출력 

  

  

  

        for (int i = 0; i < 3; i++) 

        { 

                arr[i] = round(arr[i]); 

        } // 각 인덱스를 반올림 후 

  

        avrg = avrgs(arr, 3); //평균 재할당 

  

        printf("%d \n", (int)round(avrg)); // 두번째 평균 출력 

  

} 

 
