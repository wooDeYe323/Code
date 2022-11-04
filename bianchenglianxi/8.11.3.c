#include <stdio.h>
#include <ctype.h>
int main()
{
    int low=0,up=0;
    int ch;
    while ((ch = getchar()) != EOF )
    {
        if (islower(ch))
            low++;
        if (isupper(ch))
            up++;
    }
    printf("%d %d",low,up);
    getchar();
    getchar();

    return 0;
    
}