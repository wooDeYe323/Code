#include <stdio.h>
#define NUM 8
int main()
{
    int i,a=1;
    int zu[NUM];
    for(i = 0;i <= NUM - 1 ;i++ )
        {a *=2;
        zu[i] = a;
        }
    i = NUM;
    do
    {
        i--;
        printf("%d ",zu[i]);
    } while (i >= 0);

    getchar();
    return 0;
    
}
//2022.9.22