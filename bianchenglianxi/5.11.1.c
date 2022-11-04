#include <stdio.h>
#define HOUR_TO_MINUTE 60
int main(void)
{
    int time;

    printf("Please enter the time you go home in minutes.\n");
    printf("This program will convert it in hour and minute.(<=0 to quit)\n");
    scanf("%d",&time);

    while (time > 0)
    {
        int hour;
        int minute;

        hour = time / HOUR_TO_MINUTE;
        minute = time % HOUR_TO_MINUTE;

        printf("It also means you need %d hour(s) and %d minute(s) to go home.\n",hour, minute);
        printf("Enter a number <= 0 to quit.\n");
        scanf("%d",scanf);

    }
    getchar();
    getchar();

    return 0;
    
}
// 2022.9.15