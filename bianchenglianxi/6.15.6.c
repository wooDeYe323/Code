#include <stdio.h>
int main()
{
    int i,j;
    for ( i = 0; i <4; i++)
    {
        for ( j = 0; j < 8; j++)
        {
            printf("$");         /* code */
        }
        printf("\n");
    }
    getchar();
    return 0;
}