#include <stdio.h>
int main()
{
    int i;
    int ch;
    for(i = 0; ch = getchar() != EOF; i++)
        ;
    printf("Characters: %d.\n", i);
    
    
    getchar();
    getchar();
}