#include <stdio.h>
int main()
{
    float c,f;
    scanf("%f",&c); //摄氏温度
    
    f = 9.0/5.0*c+32; // 华氏温度

    printf("%.2f",f);

    getchar();
    getchar();
    return 0;
}