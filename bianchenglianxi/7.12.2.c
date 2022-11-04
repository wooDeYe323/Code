#include <stdio.h>
int main()
{
    int i=0;
    int ch;
    printf("Enter some characters(# to quit).");
    while ((ch = getchar()) != '#')
    {
        printf("%c",ch);
        i++;
        if( i % 8 == 0)
            printf("\n");
    }
    
    getchar();
    getchar();

    return 0;
    
}
//2022.9.27