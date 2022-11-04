#include <stdio.h>
#define num1 3
#define num2 5
#define num3 2

void show(int a[num1][num2],int n, int m)
{
     int i,j;

    for (i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        printf("%-5d", a[i][j]);

        putchar('\n');

    }
    return;
}
void times(int a[num1][num2], int n , int m)
{
    int i,j;

    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        a[i][j] = num3 * a[i][j];
    }
}
int main(void)
{
    int arr[num1][num2] = 
    {
        {2, 3, 4, 5, 6},
        {22,33,44,55,66},
        {222,333,444,555,666}
    };
    times(arr,num1,num2);
    show(arr,num1,num2);

    getchar();
    return 0;
}