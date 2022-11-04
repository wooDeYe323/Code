#include <stdio.h>
#define num 5
void daoxu(double []);
void show(double []);
int main(void)
{
    double sou[num] = {1.1, 2.2, 3.3, 4.4, 5.5};

    printf("dao xu qian:");
    show(sou);

    putchar('\n');
    daoxu(sou);

    printf("dao xu hou:");
    show(sou);

    getchar();
    return 0;
}
void daoxu(double a[num])
{
    int i;
    double n;
    for(i = 0; i < num/2; i++)
    {
        n = a[i];
        a[i] = a[ num -1-i];
        a[num - 1-i] = n;
    }
    return;
}
void show(double a[num])
{
    int i;
    for(i = 0; i < num; i++)
    printf("%g  ",a[i]);

    return;
}