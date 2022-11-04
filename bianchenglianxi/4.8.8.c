#include <stdio.h>
#define GAL_L 3.785f
#define MILE_KILOMETER 1.609f
int main(void)
{
    float distance,gasoline;

    printf("Please enter the distance to the destination in miles.\n");
    scanf("%f",&distance);
    printf("Please enter the gasolin you will consume to finish the trip in gallons.\n");
    scanf("%f",&gasoline);

    printf("You can drive %.1f miles per gallon.\n",distance/gasoline);
    printf("It also means you can drive %.1f liter gasoline per 100 kilometers.\n",
    (gasoline * GAL_L) / (distance * MILE_KILOMETER));          /*如果不乘100感觉语义有问题，但是如果乘100那么除数是三个数的乘积，
    貌似有问题，好像不能三个数乘积到一块，总是算不出来好烦啊*/

    getchar();
    getchar();

    return 0;

}
//2022.9.9
//以下为答案
/*
#include <stdio.h>
#define GALLON_TO_LITRE 3.785f
#define MILE_TO_KM 1.609f

int main(void)
{
    float range, oil;

    printf("Please input the range you traveled(in mile):");
    scanf("%f", &range);
    printf("Please input the oil you spend(in gallon):");
    scanf("%f", &oil);

    printf("Fuel consumptions:\n");
    printf("In USA, your oil wear is %.1f mile/gallon.\n", range / oil);
    printf("In Europe, your oil wear is ");
    printf("%.1f litre/100km.\n", (oil * GALLON_TO_LITRE) / (range * MILE_TO_KM));

    getchar();
    getchar();

    return 0;
}
*/