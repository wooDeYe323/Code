#include <stdio.h>
int main()
{
    double  a = 100;
    int i;
    for(i=1; a > 0 && a > 9; i++)//因为 小于9万元就取不出来了
        {
         a *= 1.08;
         a -= 10;
        }
    printf(" %d years.",i);

    getchar();
    getchar();

    return 0;    
}