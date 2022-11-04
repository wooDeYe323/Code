#include <stdio.h>
#define num 5
int arr(int []);
int main()
{
    int a[num]={1, 3, 5, 100, 9};
    int max;

    max = arr(a);
    printf("%d",max);

    getchar();
    return 0;
}
int arr(int x[num])
{
    int i;
    int c = x[0];   // 用数组的第一个值初始化，这样可以避免自己初始化的值大于数组的值
    for(i = 0; i < num; i++)
    {
        if(c < x[i])
        c = x[i];
    }
    
    return c;
}