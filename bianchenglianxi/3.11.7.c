#include <stdio.h>
int main(void)
{
    float height = 1;

    printf("please enter your height in inch:");
    scanf("%f",&height);
    printf("your height in cm is %g cm",height*2.54);

    getchar();
    getchar();

    return 0;
}