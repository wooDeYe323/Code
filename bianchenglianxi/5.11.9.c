#include <stdio.h>
#define H_TO_C 5.0/9.0f
void Temperatures(double n);
int main(void)
{
    double hs;

    printf("Please enter a temperature in Degree Fahrenheit.\n");
    scanf("%lf",&hs);
    Temperatures(hs);

    getchar();
    getchar();

    return 0;
}
void Temperatures(double n)
{
    while ( n == 1)
        {
        double cs,k;
        cs = H_TO_C * (n - 32.0);
        k = cs + 273.16;
        printf(" %lf F is %lf C or %lf K\n ",n,cs,k);
        printf("Enter another number (not a number to quit): ");
        scanf("%lf",&n);
        }
    return ;
}