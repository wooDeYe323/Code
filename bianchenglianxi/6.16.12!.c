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