#include <stdio.h>
int main()
{
    printf("Please enter two number:");
    double a,b,c;
    c=scanf("%lf %lf",&a,&b);
    
    while (c == 2)
    {
      printf("(%.2lf - %.2lf)/(%.2lf * %.2lf) = %.2lf \n ",a,b,a,b,(a - b)/(a * b));
      printf("Please enter two number again(not a number to quit):\n");
      c=scanf("%lf %lf\n",&a,&b);
    }
    getchar();
    getchar();

    return 0;

}