#include <stdio.h>
int main()
{
    double a=100;
    double b=100;
    int i;
    for(i=1;a >= b ;i++)
    {
        a += 10;
        b *= 1.05;
    }
    printf("After %d years a < b .Now a = %.5lf and b =%.5lf",i,a,b);

    getchar();
    return 0;
}