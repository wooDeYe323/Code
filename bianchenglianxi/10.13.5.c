#include <stdio.h>
#define num 5
int arr(int []);
int main()
{
    int a[num]={1, 3, 5, 100, 9};
    int jicha;

    jicha = arr(a);
    printf("%d ",jicha);

    getchar();
    return 0;
}
int arr(int x[num])
{
    int i;
    int max,min,jicha;
    for(i =0, max = min = x[0]; i < num; i++)
    {
        if(max < x[i])
        max = x[i];
        if(min > x[i])
        min = x[i];
    }   
    jicha = max - min;
    return jicha;
}