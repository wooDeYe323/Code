#include <stdio.h>
int main(void)
{   

    float cups = 1;

    printf("please enter the number of cups:");
    scanf("%f",&cups);
    printf("the cups = %g pints\n ",cups/2);//一品脱等于2杯
    printf("the cups = %g ounces\n",cups*8);//一杯等于8盎司
    printf("the cups = %g big spoons\n",cups*8*2);//一盎司等于2大汤匙
    printf("the cups = %g spoons\n",cups*8*2*3);//一大汤匙等于3茶匙

    getchar();
    getchar();

    return 0;

}
//2022.9.3