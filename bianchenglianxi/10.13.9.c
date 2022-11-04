#include <stdio.h>
#define num1 3
#define num2 5
void copy(int x, int y, double target[x][y], double source[num1][num2]);
void show(int x, int y, double[x][y]);

int main()
{
    double source[num1][num2] =
    {
        {1.1, 2.2, 3.3, 4.4, 5.5},
        {1.2, 2.3, 3.4, 4.5, 5.6},
        {1.3, 1.4, 1.5, 1.6, 1.7}
    };
    double target[num1][num2];
    copy(num1, num2, target, source);
    show(num1,num2,target);

    getchar();
    return 0;
}
void copy(int x, int y, double target[x][y], double source[num1][num2])
{
    int h,l;
    for(h = 0; h < x; h++)
    {
        for(l = 0; l < y; l++)
        target[h][l] = source[h][l];
    }
    return;
}
void show(int x, int y, double arr[x][y])
{
     int h,l;
    for(h = 0; h < x; h++)
    {
        for(l = 0; l < y; l++)
        printf("%lf",arr[h][l]);

        putchar('\n');
    }
    return;
    
}









