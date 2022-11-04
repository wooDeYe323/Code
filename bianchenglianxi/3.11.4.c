//编写一个程序，读取一个浮点数，先打印成小数点形式，再打印成指数形式。然后如果系统支持，再打印成P计数法（即十六进制计数法）。
#include <stdio.h>
int main(void)
{
    float A;
    
    printf("输入一个浮点数。\n");
    scanf("%f",&A);

    printf("%f\n",A);
    printf("A的指数形式是%e\n",A);
    printf("A的指数形式是%a\n",A);

    getchar();
    getchar();
    
    return 0;
}
/*
#include <stdio.h>

int main(void)
{
    float number;

    printf("Enter a float-point value:");
    scanf("%f", &number);
    printf("fixed-point notation: %f\n", number);
    //↑小数点形式;
    printf("exponential notation: %e\n", number);
    //↑指数形式;
    printf("p notation: %a\n", number);
    //↑十六进制记数法;

    return 0;
}
*/
//2022.9.3