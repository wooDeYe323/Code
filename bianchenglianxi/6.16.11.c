#include <stdio.h>
#define LIMIT 8
int main()
{
    int num[LIMIT];
    int i;
    printf("Enter %d number:",LIMIT);
    for(i=0;i <= LIMIT -1;i++)
        scanf("%d",&num[i]);
    int b;
    for ( b = LIMIT-1;b >= 0 ;b--)
    {
        printf("%d",num[b]);
    }
    getchar();
    getchar();

    return 0;
    
}