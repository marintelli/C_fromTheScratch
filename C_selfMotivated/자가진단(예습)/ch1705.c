
#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    double a[5];
    double *pi = a;
    
    for (int i = 0 ; i < 5 ; i++ ) scanf("%lf", &pi[i]);
    
    for (int i = 0 ; i < 5 ; i++ ) printf("%.1f ", pi[i]);
    

    
    return 0;
}

