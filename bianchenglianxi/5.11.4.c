#include <stdio.h>
int main(void)
{
    int height;

    printf("Please enter a height in centimeters:");
    scanf("%d",&height);
    while (height >0)
    {
        int meters,centimeters;
        meters = height / 100;
        centimeters = height % 100;
        printf("The %d centimeters is %d meters, %d centimeters.( <= 0 to quit)\n ",height,meters,centimeters);
        scanf("%d",&height);
    }
    getchar();

    return 0;
}