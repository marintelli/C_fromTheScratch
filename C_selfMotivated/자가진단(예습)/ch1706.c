
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    double hap;
    scanf("%d", &n);
    double *p = new double[n];
   
    
    for ( i = 0; i< n ; i++) {
        scanf("%lf", &p[i]);
        
    }
    
    for (i = 0 ; i < n; i++) {
        printf("%.2f ", p[i]);
        hap += p[i];

        
    }
    
    printf("\n");
    
    printf("hap : %.2f\n", hap);
    
    printf("avg : %.2f\n", (hap/n));
    
    
    delete []p;
    
    return 0;
}

