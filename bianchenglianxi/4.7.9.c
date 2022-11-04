#include <stdio.h>
int main(void)
{
    int a;
    float b;
    char c[10];
    char d[10];
    int e;

    scanf("%d\n",&a);
    scanf("%E\n",&b);
    scanf("%s\n",c);
    scanf("%s\n",d);
    scanf("%d\n",&e);
    printf("%d %E %s %s %d",a,b,c,d,e);

    getchar();
    getchar();

    return 0;
}