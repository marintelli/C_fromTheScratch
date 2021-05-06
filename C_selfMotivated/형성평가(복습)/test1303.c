#include <stdio.h>

int N, arr [101];
int M, sum = 0;
void output()
{
  //sum 값이
    for (int i = 1; i <= N; i++) {
        sum += arr[i];
    }
  // 입력받은 M 과 같은 경우에만   
    if(sum == M)
    {
        for (int i = 1; i <= N ; i++)
        {
        printf("%d ", arr[i]);
        }
        printf("\n");
    }
    
    sum = 0;

}

void dice(int step)
{
    
    if (step > N)
    {
        output();
        return ;
    }
    
    for (int i = 1 ; i <= 6; i++) {
        arr[step] = i;
        dice(step + 1);
    }
}

int main()
{
    scanf("%d%d", &N, &M);
    dice(1);
    
    return 0;
}
