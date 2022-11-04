#include <stdio.h>  //套娃,让被调用的函数调用其他函数。
void one_three(void);   //函数声明
void two(void);   //函数声明

int main(void)
{
    printf("starting now:\n");   //先打印staring now:
    one_three();      //然后调用该函数
    printf("done!\n");  //在打印done!

    return 0;
}
void one_three(void)    //该函数是先打印one,再调用two函数,之后再打印three
{
    printf("one\n");
    two();
    printf("three\n");
}
void two(void)
{
    printf("two\n");
}
//轻轻松松，2022.7.31.22.59
