#include <stdio.h>
int main()
{
    int h,l;
    
    for(h = 0 ;h < 5;h++)
    {    for(l = 0; l <= h; l++)
        printf("$");
    printf("\n");
    }   
    getchar();
    getchar();

    return 0;
}