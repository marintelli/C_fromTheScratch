// 7번 

#include <stdio.h> 

#define PI 3.141592 

#define AREA radius * radius * PI 

  

  

int main() 

{ 

        double radius, area; 

  

        printf("radius : "); 

  

        scanf("%lf", &radius); 

         

        area = AREA; 

  

        printf("area = %.3f\n", area); 

  

        return 0; 

} 

 
