#include <stdio.h>
void large_of(int * u, int * v);
int main()
{
    int x,y;
    printf("Enter two number:");
    while(scanf("%d %d",&x,&y) == 2)
    {
        large_of(&x, &y);
        printf("%d %d",x, y);
        printf(" try again(q to quit):");
    }
    getchar();
    getchar();

    return 0;
}
void large_of(int * u, int * v)
{
    if(*u > *v)
        *v = *u;
    else
        *u = *v;
    return ;
}