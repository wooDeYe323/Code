#include <stdio.h>
#define JIABAN 1.5
#define TAX1 0.15
#define TAX2 0.2
#define TAX3 0.25
int main()
{
    int hours;
    double SALARY_PER_HOUR;
    double salary;
    double shuihou_salary;
    double tax;
    printf("*****************************************************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("1) $ 8.75/hr                          2) $9.33/hr\n");
    printf("2) $ 10.00/hr                         4) $11.20/hr\n");
    printf("5) quit\n");
    printf("*****************************************************************\n");
    int a;
    while(scanf("%d",&a) == 1 )
    {
    switch (a)
    {
    case 1:
        SALARY_PER_HOUR = 8.75;
        break;
    case 2:
        SALARY_PER_HOUR = 9.33;
        break;
    case 3:
        SALARY_PER_HOUR = 10.00;
        break;
    case 4:
        SALARY_PER_HOUR = 11.20;
        break;
    case 5:
        break;
    default:
        printf("Enter the corret number.\n");
        printf("*****************************************************************\n");
        printf("Enter the number corresponding to the desired pay rate or action:\n");
        printf("1) $ 8.75/hr                          2) $9.33/hr\n");
        printf("2) $ 10.00/hr                         4) $11.20/hr\n");
        printf("5) quit\n");
        printf("*****************************************************************\n");
        break;
    }
    printf("Not a number to next step:");
    }
    printf("Enter your work hours per week:");
    while(scanf("%d",&hours) == 1 )
    {
    if(hours <= 40)
    salary = hours * SALARY_PER_HOUR;
    else if(hours > 40)
    hours = 40 + (hours-40) * JIABAN;
    salary = hours * SALARY_PER_HOUR;

    if(salary <= 300)
    {
    tax = salary * ( TAX1);
    shuihou_salary = salary - tax;
    }
    else if (salary <= 450)
    {
    tax = 300 * TAX1 + (salary - 300) * TAX2;
    shuihou_salary = salary - tax;
    }
    else
    {
    tax = 300 * TAX1 + 150 * TAX2 + (salary-450) * TAX3;
    shuihou_salary = salary - tax;
    }
    
    printf("shui qian salary wei %g.\n",salary);
    printf("tax is %g.\n",tax);
    printf("shui hou salary wei %g.\n",shuihou_salary);
    printf("try again (not a number to quit):");
    }
    printf("Done.\n");

    getchar();
    getchar();

    return 0;

}