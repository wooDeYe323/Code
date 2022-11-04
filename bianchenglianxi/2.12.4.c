//编程练习
#include <stdio.h>
void jolly(void);                        //函数原型
void deny(void);                        //函数原型
int main(void)
{
    jolly();      //调用jolly
    jolly();
    jolly();
    deny();       //调用deny

getchar();
    return 0;
}
void jolly(void)   //定义Jolly
{
    printf("For he's a jolly good fellow!\n");
}
void deny(void) //定义deny
{
    printf("Which nobody can deny!\n");
}
