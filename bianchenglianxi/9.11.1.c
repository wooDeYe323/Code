#include <stdio.h>
double min(double,double);
int main()
{
    double a;
    a = min(1,2);
    printf("%lf",a);
    return 0;
}
double min(double x, double y)
{
    double a;
    if(x < y)
        a = x;
    else
        a = y;
    return a;
}