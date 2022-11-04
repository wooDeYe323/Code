#include <stdio.h>
int main(void)
{
    int time;

    printf("Please enter a period of time in days.\n ");
    scanf("%d",&time);
    while (time >0)
    {
        int weeks,days;
        weeks = time / 7;
        days = time % 7;
        printf("%d days are %d weeks, %d days.\nPlease enter a period of time in days.(<= 0 to quit)\n",time,weeks,days);
        scanf("%d",&time);
    }
    getchar();
    getchar();

    return 0;

}