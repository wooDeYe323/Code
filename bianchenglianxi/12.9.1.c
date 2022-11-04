#include <stdio.h>
void critic(int * units);
int main()
{  
    int  * units;           //应该定义一个数，把数的地址传过去，改为int units;

    printf("How many pounds to a firkin of butter ?\n");
    scanf("%d", units);     //数，不是地址，改为(&units)
    while (*units != 56)
    {
        critic(units);      //把数的地址传过去 改为 critic(&units);
    }
    printf("You must have looked it up.\n");

    getchar();
    return 0;
}

void critic(int * units)
{
    printf("No luck, my friend. Try again.\n");
    scanf("%d",units);          //这里的Units 是地址所以不用加&
}