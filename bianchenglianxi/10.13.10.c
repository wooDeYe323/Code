#include <stdio.h>
#define num 4

void jia(int a[num], int b[num], int c[num], int n)
{
    int i;
    for(i = 0; i < n; i++)
    c[i] = a[i] + b[i];

    return;
}

void show(int a[num], int n)
{
    int i;
    for  (i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    return;
}
int main()
{
    int sou1[num] = {1,2,3,4};
    int sou2[num] = {5,6,7,8};
    int tar[num];

    jia(sou1,sou2,tar,num);
    show(tar,num);

    getchar();
    return 0;
}