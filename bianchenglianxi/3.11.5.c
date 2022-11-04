#include <stdio.h>
int main(void)
{
    double A;

    printf("please enter your age in years:\n");
    scanf("%lf",&A);
    printf("your age in seconds is %lf seconds",A*3.156e7);

    getchar();
    getchar();

    return 0;

}