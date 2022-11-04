#include <stdio.h>
#define SALARY_PER_HOUR 10
#define JIABAN 1.5
#define TAX1 0.15
#define TAX2 0.2
#define TAX3 0.25
int main()
{
    int hours;
    double salary;
    double shuihou_salary;
    double tax;
    printf("Enter your work hours per week:");
    while(scanf("%d",&hours) == 1 && hours <= 168)
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
    printf("try again (not a number or hours > 168 to quit):");
    }
    printf("Done.\n");

    getchar();
    getchar();

    return 0;

}