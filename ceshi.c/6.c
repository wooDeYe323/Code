#include <stdio.h>
int main()
{
    int a[2][3]={{1,2,3},{4,5,6}};
    printf("%d %p %d %p",*(*(a+1)+2),&*(*(a+1)+2),a[1][2],a[1][2]);

    getchar();
    getchar();

    return 0;
}