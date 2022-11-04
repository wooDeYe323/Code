#include <stdio.h>
void copy_arr(double[], double[],int);
void copy_ptr(double[], double[],int);
void copy_ptrs(double[], double[],int);

int main()
{
    double source[5] ={1.1, 2.2, 3.3, 4.4, 5.5};

    double target1[5];
    double target2[5];
    double target3[5];
    copy_arr(target1,source,5);
    copy_ptr(target2,source,5);
    copy_ptrs(target3,source,5);

    getchar();
    return 0;
}
void copy_arr(double target1[], double source[],int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        target1[i]=source[i];
        printf("%lf ",target1[i]);
    }
    putchar('\n');

    return;
}
void copy_ptr(double target2[], double source[],int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        *(target2+i) = *(source+i);
        printf("%lf ",*(target2+i));
    }
    putchar('\n');

    return;
}
void copy_ptrs(double target3[], double source[],int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
    *(target3) = *(source);
    printf("%lf ",*target3);
    target3++;
    source++;
    }

    return;
}