#include <stdio.h>
void cube(double n);
int main(void)
{
    double number;

    printf("Please enter a number:");
    scanf("%lf",&number);
    cube(number);

    getchar();
    getchar();

    return 0;

}
void cube(double n)
{
    int i = 0;                          //我的想法，构建一个简单的循环
    while (i++ < 1)                     //但是是属于小题大作了
        n = n*n*n;                      //不这么搞了
    printf("Its cube is %.2lf.\n",n); //printf("The cube of this %.2lf is %.2lf",n,n*n*n);(答案的思路)

    return;    
}
// 2022.9.15