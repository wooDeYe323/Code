#include <stdio.h>
int pow(int m, int n);
int main()
{
    int a,b,sum;
    printf("Enter two numbers.\n");
    while(scanf("%d %d",&a,&b)==2 && a<b)
    {
        sum = pow(a,b);
        printf("The sum of the squares from %d to %d is %d.\n",a*a,b*b,sum);
        printf("Enter next sets of limits.\n");
    }
    printf("Done!\n");

    getchar();
    getchar();

    return 0;
}
int pow(int m, int n)
{
    int sums = 0;
    for(;m <= n; m++)
         sums += m*m;
    return sums;
}
//2022.9,21