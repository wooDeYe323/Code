#include <stdio.h>
int main()
{
    int ch,prev;
    int i = 0;
    int times = 0;

    printf("Enter some characters(# to quit):");
    while((ch = getchar()) != '#')
    { 
        if(i > 0)
            if(prev == 'e' && ch == 'i')
            times++;
        printf("%c",ch);
        prev = ch;
        i++;
    }
    printf("ei chu xian le %d ci",times);
    getchar();
    getchar();

    return 0; 
}