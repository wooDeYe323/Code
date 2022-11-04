#include <stdio.h>
int str( const char * st)
{
    int i = 0;

    while(st[i] != '\0' )
    {
        i++;
    }
    return i;
}
int main()
{
    int a = 0;

    const char * pt = "Xiang yiheng";
    a = str(pt);
    printf("%d",a);

    getchar();
    return 0;
    
}