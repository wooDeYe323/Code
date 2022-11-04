#include <stdio.h>
int main()
{
    int i;
    int ch;
    while((ch=getchar()) != EOF)
    {

        i++;
        printf(" '%c' - '%d' ",ch,ch);
        if ( i % 10 == 0)
        {
            printf("\n");
        }
    }
    getchar();
    getchar();
    
}
//还得是答案‘
