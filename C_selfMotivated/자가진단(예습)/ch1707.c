

#include <stdio.h>
#include <stdlib.h>

void input(int arr[], int n)
{
    for (int i = 0 ; i < n ; i++) {
        scanf("%d", &arr[i]);
    }
}


void swap(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}


void sort(int a[], int n)
{
    for (int i = 0 ; i < n -1 ; i++) {
        for (int j = i + 1 ; j < n ; j++) {
            if(a[i]< a[j])
            {
                swap(&a[i], &a[j]);
            }
        }
    }
}


void output(int arr[], int n)
{
    
    for (int i = 0; i < n ; i++) {
        printf("%d ", arr[i]);
    }
    
}
int main()
{
    int i, n;
    
    scanf("%d", &n);
    
    int *arr = new int[n];
    

    input(arr, n);
    sort(arr, 5);
    output(arr, 5);
    
    delete []arr;
    
 
    return 0;
}

