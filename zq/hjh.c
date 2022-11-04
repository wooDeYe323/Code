#include <stdio.h>
#include <math.h>
#define TIMES 10
double jc(double p);
int main()
{
    double i,z,m, fuhao;
    double a,num;
    printf("Enter a number:");
    scanf("%lf",&a);
    num=a;
    for(i=1; i <= TIMES; i++)
        {
        z = pow(a,2*i - 1);   //分子等于输入值的（2i-1）次方
        m = jc(2*i-1);         //分母等于 （2i -1 ）的阶乘
        fuhao = pow(-1,i+1);  // 符号 （-1）的 (i+1)次方
        if(i !=1)           // 当 i 不等于-1 ，开始递推， i=1 直接输出num
        num = num + fuhao*z/m; 
        printf(" %g ci yun suan hou, jieguo wei %.3lf.\n",i,num);
        }
    getchar();
    getchar();
    return 0;
}
double jc(double p)          //p是形式参数 后来被 实际参数（2*i -1）替代
{
    double q=1;         // q =1 使得 p*q永远等于q*1
    for(;p > 0; p--)
        q = p*q;  //所以 这里是q的阶乘
    return q;        //把q 的值 返回给jc()函数 
}