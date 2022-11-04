#include <stdio.h>
void   exchange(double * a, double * b, double * c);
int main()
{
    double a, b, c;
    printf("Enter 3 numbers:");
    while (scanf("%lf %lf %lf",&a, &b, &c) == 3)
    {
        exchange(&a,&b,&c);
        printf("%g %g %g",a,b,c);
        printf("try again(q to quit):");
    }
    getchar();
    getchar();
    return 0;
}
void exchange(double * a, double * b, double *c)
{   
    double num1,num2,num3;
    if(*a < *b)
    {    
        if(*a < *c)
        {
            num1 = *a;
            if(*b < *c)
            {
                num2 = *b;
                num3 = *c;
            }
            else
            {num2 = *c;
            num3 = *b;
            }
        }
        else
        {
        num1 = *c;
        num2 = *a;
        num3 = *b;
        }
    }
    else
    {
        if(*b < *c)
        {
            num1 = *b;
            if(*a < *c)
            {
            num2 = *a;
            num3 = *c;
            }
            else
            {
            num2 = *c;
            num3 = *a;
            }
        }
        else
        {
        num1 = *c;
        num2 = *b;
        num3 = *a;
        }
        
    }
    *a = num1;
    *b = num2;
    *c = num3;
    return ;
} 