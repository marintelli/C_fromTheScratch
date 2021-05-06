#include <stdio.h>

int N, arr [101];

void output()
{
    for (int i = 1; i <= N ; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
}

void dice(int step)
{
    
    if (step > N)
    {
        output();
        return ;
    }
    
    for (int i = arr[step - 1] ; i <= 6; i++) {
        arr[step] = i;
        dice(step + 1);
    }
}

int main()
{
    scanf("%d", &N);
    arr[0] = 1;
    dice(1);
    
    return 0;
}

