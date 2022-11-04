#include <stdio.h>
#define num1 3
#define num2 5

void cunchu(double a[num2], double b[num2], double c[num2], double tar[num1][num2])
{
    int i,j;
    for(i = 0; i < num1; i++)
    {
        for(j = 0; j < num2; j++)
        {
        if(i == 0)
        tar[i][j] = a[j];
        if(i == 1)
        tar[i][j] = b[j];
        if(i == 2)
        tar[i][j] = c[j];
        }
    }
    return;
}
void zupingjun(double tar[num1][num2])
{
    int i,j;
    double sum;
    for(i = 0; i < num1; i++)
    {
        for(j = 0,sum = 0; j < num2; j++)
        sum = sum + tar[i][j];
        printf("di %d zu de ping jun zhi wei %-5g",i,sum / num2);
        putchar('\n');
    }
}
void zongpingjun(double tar[num1][num2])
{
    int i,j;
    double sum = 0;
    for(i = 0; i < num1; i++)
    {
        for(j = 0; j < num2; j++)
        sum = sum + tar[i][j];
    }
    printf("ping jun zhi wei %-5g\n", sum / (num1 * num2));

    return;
}
void find(double tar[num1][num2])
{
    int i,j;
    double max = tar[0][0];
    for(i = 0; i < num1; i++)
    {
        for(j = 0; j < num2; j++)
        if(max < tar[i][j])
        max = tar[i][j];
    }
    printf("max is %-5g\n",max);

    return;

}
void show(double a[3][5])
{
    int h,l;
    for(h = 0; h < 3; h++)
    {
        for(l = 0; l < 5; l++)
        printf("%lf ",a[h][l]);
        putchar('\n');
    }   
}

int main()
{
    double sou1[num2] = {1,2,3,4,5};
    double sou2[num2] = {11,22,33,44,55};
    double sou3[num2] = {111,222,333,444,555};
    double tar[num1][num2];

    cunchu(sou1,sou2,sou3,tar);
    show(tar);
    zupingjun(tar);
    zongpingjun(tar);
    find(tar);

    getchar();
    return 0;

}