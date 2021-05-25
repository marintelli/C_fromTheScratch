#include <stdio.h>
#include <string.h>

struct point
{
    double x,y;
} p1,p2,p3,p4;

void p_input(struct point &p)
{
    printf("점의 좌표는? (x,y) ");
    scanf("%lf %lf", &p.x, &p.y);
}

struct point center(struct point a, struct point b, struct point c)
{
    struct point k;
    k.x = (a.x + b.x + c.x) / 3;
    k.y = (a.y + b.y + c.y) / 3;
    
    return k;
}

void p_output(struct point p)
{
    printf("무게중심 위치 = (%.1f, %.1f) \n", p.x, p.y);
}

int main()
{
    p_input(p1);
    p_input(p2);
    p_input(p3);
    
    
    p4 = center(p1, p2, p3);
    p_output(p4);
    
    return 0;
}
