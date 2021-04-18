#include <stdio.h>

int main()
{
    char alpha = 'A';

    while(alpha <= 'Z')
    {
        printf("%c\n", alpha++);
    }

    return 0;
}