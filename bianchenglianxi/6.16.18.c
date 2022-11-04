#include <stdio.h>
#define DUN 150
int main()
{
    int a=5;
    int i;
    for(i=1;a < 150; i++)
        {
            a -= 1;
            a *= 2;
            printf(" After %d weeks, a has %d friends.\n ",i,a);
        }

    getchar();
    return 0;
}
//2022.9.22