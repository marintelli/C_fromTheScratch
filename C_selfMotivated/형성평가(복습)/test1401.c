
//1401

#include <stdio.h>


int main()
{
    char ch1, ch2;
    while(1)
    {
        
        scanf(" %c %c", &ch1, &ch2);
        
        if( (int)ch1 > (int)ch2 )
        {
        
            printf("%d %d \n", ch1+ch2, ch1 - ch2);
        
        }else
        {
        
            printf("%d %d \n", ch1+ch2, ch2 - ch1);
        }
        

    }
    return 0 ;
}
