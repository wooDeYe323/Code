#include <stdio.h>

int main(void)
{
    int i, n;

    printf("Please enter a number (<= 0 to quit): ");
    while ((scanf("%d", &n) == 1) && (n > 0))
    {
        double res1 = 0.0;
        double res2 = 0.0;
        for (i = 1; i <= n; i++)
        {
            res1 += 1.0 / i;
            if (i % 2 == 1)
            {
                res2 += 1.0 / i;
            }
            else
            {
                res2 -= 1.0 / i;
            }
        }
        printf("1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + ...");
        printf("sum are %g\n", res1);
        printf("1.0 - 1.0/2.0 + 1.0/3.0 - 1.0/4.0 + ...");
        printf("sum are %g\n", res2);
        printf("The sum of the first %d items of the two sequences is %g\n", n, res1 + res2);
        printf("\nYou can enter again (<= 0 to quit): ");
    }
    printf("Done.\n");

    return 0;
}

/*
#include <stdio.h>
double yunsuan(double a);
int main()
{
    double count,sum;
    printf("Enter the count you want:");
    while(scanf("%lf",&count) && count > 0){
        sum = yunsuan(count);
        printf("%lf",sum);
    }
    getchar();
    getchar();

    return 0;
    
}
double yunsuan(double a)
{
    double i,sums;
    for(i = 1; i <= a; i =2*i-1)
    sums += 1/i;

    return sums;
}
*/