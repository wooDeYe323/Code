#include <stdio.h>
int pow(int n);
int main()
{
    int up,down;
    printf("Please enter two number.\n");
    scanf("%d %d",&up,&down);
    for(;up <= down;up++)
        pow(up);
    
    getchar();
    getchar();

    return 0;
}
int pow (int n)
{
    printf("%5d %5d %5d\n",n,n*n,n*n*n);
    return 0;
}