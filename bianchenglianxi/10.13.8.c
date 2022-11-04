#include <stdio.h>
#define num1 7
#define num2 3
void copy_arr(double target1[], double source[],int n);
int main()
{
    double sou[num1] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
    double tar[num2];
    copy_arr(tar,sou,num2);         //   copy_arr(copy, orig + 2, LEN2);  答案更好

    getchar();
    return 0;
}
void copy_arr(double target1[], double source[],int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        target1[i]=source[i + n - 1];
        printf("%lf ",target1[i]);
    }
    putchar('\n');

    return;
}