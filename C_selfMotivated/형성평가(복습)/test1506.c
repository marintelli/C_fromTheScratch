
//1506

#include <stdio.h>
#include <string.h>

int main()
{
    
    char A[50], B[50], C[50];
    int n;
    
    
    scanf("%s %s", A, B);
    scanf("%d", &n);
    
    
    strcpy(C,B);
    strcat(A,C);
    
    puts(A);
    strncpy(C,A,3);

    puts(C);

    
    return 0;
}
