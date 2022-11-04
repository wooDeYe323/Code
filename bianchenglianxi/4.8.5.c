#include <stdio.h>
int main(void)
{
    float speed,size;

    printf("Please enter your donwload speed in megabits per second.\n");
    scanf("%f",&speed);
    printf("Please enter your file's size in megabytes.\n");
    scanf("%f",&size);

    printf("At %.2f megabits per second, a file of %.f megabytes.\n",speed,size);
    printf("download in %.2f seconds.\n",size*8/speed);

    getchar();
    getchar();

    return 0;
}