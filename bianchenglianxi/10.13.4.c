#include <stdio.h>
#define num 5
int max(double a[]);
int main(void)
{
    double arr[num] = {1.1, 87.2, 3.3, 4.4, 5.5};
    int maxm;
    
    maxm = max(arr); 
    printf("%d", maxm);

    getchar();
    return 0;
}
int max(double a[])
{
    int i,c;
    double m;
    for ( i = 0; i < num; i++)
    {
        if(m < a[i])
        {
            m = a[i];
            c = i;
        }
    }
    return c;
}