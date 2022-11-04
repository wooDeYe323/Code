#include <stdio.h>
int main()
{
    int num;
    int i = 2;
    printf("Enter a integer, this program will give its prime number:");
    while (scanf("%d",&num) == 1)
    {
        while(i <= num)
        {
        if( num % i == 0)
        {
            num = num / i;
            printf("%d ",i);
        }
        else
            i++;
        }
        i = 2;//重置i
        printf("\ntry again(not a number to quit):");
    }
    getchar();
    getchar();
    return 0;
}
//2022.9.28