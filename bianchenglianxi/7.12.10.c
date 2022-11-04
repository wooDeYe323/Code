#include <stdio.h>
int main()
{
    int num;
    int revenue;
    float tax;
    printf("**********************|*********************************\n");
    printf("KIND                  |TAX        \n");
    printf("1)SINGLE              |revenue<= 17850$ %%15,beyond %%28\n");
    printf("2)HOUSEHOLD           |revenue<= 23900$ %%15,beyond %%28\n");
    printf("3)MARRIED             |revenue<= 29750$ %%15,beyond %%28\n");
    printf("4)MARRIED,BUT DIVORCED|revenue<= 14875$ %%15,beyond %%28\n");
    printf("**********************|*********************************\n");
    printf("choose your kind:");
    while (scanf("%d",&num) ==1)
    {
        printf("Enter your revenue:");
        while(scanf("%d",&revenue) == 1)
        {
        printf("\n");
        switch (num)
        {
        case 1:
        if (revenue <= 17850)
        tax = revenue * 0.15;
        else 
        tax = 17850 * 0.15 + (revenue-17850) * 0.28; 
        break;
        case 2:
        if (revenue <= 23900)
        tax = revenue * 0.15;
        else 
        tax = 23900 * 0.15 + (revenue-23900) * 0.28; 
        break;
        case 3:
        if (revenue <= 29750)
        tax = revenue * 0.15;
        else 
        tax = 29750 * 0.15 + (revenue-29750) * 0.28; 
        break;
        case 4:
        if (revenue <= 14875)
        tax = revenue * 0.15;
        else 
        tax = 14875 * 0.15 + (revenue-14875) * 0.28; 
        break;
        case 5:
        break;
        }
        printf("Your tax is %g,\n",tax);
        printf("you can change your revenue(not a number to quit) :");
        }
    }
    getchar();
    getchar();
    return 0;

    
}