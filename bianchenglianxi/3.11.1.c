//观察整数上溢，浮点数上下溢
#include <stdio.h>
int main(void)
{
    int  a = 2147483647;
    double  b = 2e1024;
    double c = 0.200403239158;

    printf("%d\n",a+1);
    printf("%e\n",b+1);
    printf("%f\n",c/2);

    getchar();

    return 0;
}