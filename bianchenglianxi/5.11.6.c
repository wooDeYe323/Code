#include <stdio.h>
int main(void)
{
    int number,digits,sum;
    int i=0;

    printf("Please enter a number and the digits after it.\n");
    scanf("%d %d",&number,&digits);
    printf("We will calculate the sum of squares of it and the %d  digits after it\n",digits);
    while (i++ < digits)
    {
        sum = sum + number*number;
        number++;
    }
    printf("OK,the sum is %d.\n",sum);

    getchar();
    getchar();

    return 0;
}