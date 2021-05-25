#include <stdio.h>
#include <string.h>

struct human
{
    char name[50];
    int height;
};

struct human min(struct human arr[], int n)
{
    struct human smallest = arr[0];
    
    for (int i = 0 ; i < n ; i++) {
        if(smallest.height > arr[i].height){
            smallest = arr[i];
        }
    }
    return smallest;
}


int main()
{
    struct human humanbeing[5], small_person;
    int i;
    
    for (int i = 0 ; i < 5 ; i++) {
        
        scanf("%s %d", humanbeing[i].name, &humanbeing[i].height);
        
    }
    
    small_person = min(humanbeing, 5);
    
    printf("%s %d\n",small_person.name, small_person.height);
           
    
    
}
