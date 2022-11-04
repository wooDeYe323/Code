#include <stdio.h>
#define PI 3.14
int main()
{
    float r,h;
    scanf("%f %f",&r,&h);
    
    float circle, area, surface, globe, column;
    circle = 2*PI*r;
    area = PI*r*r;
    surface = 4*PI*r*r;
    globe = PI*r*r*r*4/3;
    column = area*h;

    printf("%.2f %.2f %.2f %.2f %.2f",circle, area, surface, globe, column);

    getchar();
    getchar();
    return 0;
}