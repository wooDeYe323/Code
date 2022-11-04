#include <stdio.h>

int main(void)
{
    int ch;
    int i = 0;

    printf("Please enter some characters:\n");
    while ((ch = getchar()) != EOF)
    {
        if (i++ == 10)
        {
            putchar('\n');
            i = 1;
        }
        if (ch >= 32) //空格的十进制ASCII码;
        {
            printf(" \'%c\' - %3d ", ch, ch);
        }
        else if (ch == '\n') 
        {
            printf(" \\n - \\n\n ");
            i = 0;
        }
        else if (ch == '\t')
        {
            printf(" \\t - \\t ");
        }
        else        //ch 小于32且不等于换行符和制表符
        {
            printf(" \'%c\' - ^%c ", ch, ch + 64);
        }
    }
    puts("Done.");

    return 0;
}
