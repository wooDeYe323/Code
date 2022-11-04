#include <stdio.h>
double daoshu(double,double);
int main()
{
    double a,b;

    printf("Enter two number, this progarm will show you their harmonic mean:");
    while (scanf("%lf %lf",&a,&b) == 2)
    {
        daoshu(a,b);
        printf("\ntry again(q to quit):");
    }
    getchar();
    getchar();
    return 0;
}
double daoshu(double a,double b)
{
    a = 1 / a;
    b = 1 / b;

    double sum;
    sum = (a + b)/2;
    sum = 1 / sum;
    
    printf("%lf",sum);
    return 0;
}