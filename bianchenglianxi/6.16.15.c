#include <stdio.h>
#define NUM 20
int main()
{
    char zu[NUM];
    int i;
    for(i=0;i < NUM; i++)
        scanf("%c",&zu[i]);
    for(i = NUM - 1; i >= 0; i--)
        printf("%c",zu[i]);
    getchar();
    getchar();

    return 0;
}