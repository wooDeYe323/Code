#include <stdio.h>

double cal(double n, double k);

int main(void)
{
    double i, j;

    printf("Please enter two numbers (q to quit): ");
    while (scanf("%lf %lf", &i, &j) == 2)
    {
        printf("(%g - %g) / (%g * %g)", i, j, i, j);
        printf(" = %g\n", cal(i, j));
        printf("You can enter again (q to quit): ");
    }
    printf("Done.\n");

    return 0;
}

double cal(double n, double k)
{
    return (n - k) / (n * k);
}

/*
#include <stdio.h>
double yunsuan(double m， double n, double k);
int main()
{
    printf("Please enter two number(Not a Number to quit):");
       double a,b,c;  应该把C删掉
    c=scanf("%lf %lf",&a,&b);
    yunsuan(a,b,c);  把循环留在主函数，只让复函数运算最终结果，真TM多此一举
    
    getchar();
    getchar();

    return 0;

}
double yunsuan(double m,n,k)
{
    
    while (k == 2)
    {
      printf("(%.2lf - %.2lf)/(%.2lf * %.2lf) = %.2lf \n ",m,n,m,n,(m - n)/(m * n));
      printf("Please enter two number again(not a number to quit):\n");
      c=scanf("%lf %lf\n",&m,&n);
    }
    return k;
}
*/