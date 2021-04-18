#include <stdio.h>

int main()
{
    // 1번
    printf("1번");


    int num1;
    scanf("%d", &num1);
    
    for(int i = 1; i <= num1 ; i ++) printf("JUNGOL \n");

    // 2번
    printf("2번 ");


    int num2_1, num2_2;


    while(1)
    {

    scanf("%d%d", &num2_1, &num2_2);

    if(num2_1 * num2_2 > 100 )  break;// 10 이하의 수만 입력받기
    
    if(num2_1 >= num2_2)
    {
        for(int i = num2_2 ; i <= num2_1 ; i ++) printf("%d \n", i); 
    } else
    {
         for(int i = num2_2 ; i <= num2_1 ; i ++) printf("%d \n", i);
    }

    }

    // 3번
    printf("3번 \n");

    int num3, sumFivehap = 0;
    
    scanf("%d", &num3);

    for(int i = 1 ; i <= num3;i++)
    {
        if(i % 5 == 0 ) sumFivehap += i ;
    }

    printf("%d \n", sumFivehap);

    // 4번
    printf("4번\n");
    
    int n4, num4, sum4; 
    double avg4;

    scanf("%d", &n4);
    if(n4<= 100) // 100이하 정수라면
    {
        for(int i = 0 ; i < n4 ; i ++)
        {
            scanf("%d", &num4);
            sum4 += num4;

        }

        avg4 = (double)sum4 / n4;
        printf("%.2f \n", avg4);
    }

    // 5번

    printf("5번");

    int num5, even, odd;
    
    for( int i = 0 ; i < 10 ; i ++)
    {
        scanf("%d", &num5);
        (num5 % 2 == 0) ? even++ : odd++;
    }

    printf("even : %d \n", even );
    printf("odd : %d \n", odd);

    
    return 0;
}
