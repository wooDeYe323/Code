#include <stdio.h>
#include <float.h>
int main(void)
{
    double a = 1.0/3.0;
    float  b = 1.0/3.0;

    printf("%.6f %.6f\n",a,b);
    printf("%.12f %.12f\n",a,b);
    printf("%.18f %.18f\n",a,b);  

    printf("%d\n",FLT_DIG);         //显示float类型的最少有效数字位数（十进制）
    printf("%d\n",DBL_DIG);       
                                    //只能比最少有效数字位数多1位
    getchar();

    return 0;

}