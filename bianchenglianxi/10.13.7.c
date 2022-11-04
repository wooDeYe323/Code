#include <stdio.h>
void copy(double tar[][3], double sou[][3]);
void show(double [][3]);
int main()
{
    double source[2][3] = 
    {
        { 1.1, 2.2, 5.5},
        { 3.3, 4.4, 7.7}
    };
    double target[2][3];
    
    copy(target,source);
    show(target);

    getchar();
    return 0;
}
void copy(double tar[][3], double sou[][3])
{
    int h,l;
    for(h = 0; h < 2; h++)
    {
        for(l = 0; l < 3; l++)
        tar[h][l] = sou[h][l];
    }

    return;
}
void show(double a[][3])
{
    int h,l;
    for(h = 0; h < 2; h++)
    {
        for(l = 0; l < 3; l++)
        printf("%lf ",a[h][l]);
        putchar('\n');
    }   
}