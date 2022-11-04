#include <stdio.h>
int main(void)
{
    int days;
    int sum = 0;
    int count;
    int i = 0;
    
    printf("Please enter  a period of time in days:");
    scanf("%d",&days);
    printf("please enter your salary:$");
    scanf("%d",&count);
    printf("We think you deserve one more dollar every day.\n");
    while (i++ < days)
    {
        sum = sum + count;
        count++;
    }
    printf("So during this time the money you get is %d dollars.\n",sum);
    getchar();
    getchar();

    return 0;
    
}