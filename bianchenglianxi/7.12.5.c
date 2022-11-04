#include <stdio.h>
int main()
{
    int ch;
    int times = 0;

    printf("Enter some characters(# to quit):");
    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
        case '.':
            ch = '!';
            times++;
            break;
        case '!':
            printf("%c",ch);
            times++;
            break;
        default:
            break;
        }
        printf("%c",ch);
    }
        printf("yi gong zhuan huan le %d ci.\n",times);
    getchar();
    getchar();
    return 0;
}