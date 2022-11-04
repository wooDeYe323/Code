#include <stdio.h>
int main()
{
    int space = 0;
    int line_break = 0;
    int others = 0;
    int ch = 0;

    while((ch = getchar()) != '#')
    {
        if(ch == ' ')
        {
            space++;
        }
        else if (ch == '\n')
        {
            line_break++;
        }
            else
            { 
            others++; // 必须引入中间量，因为结束循环时 ch == 35
            }
    }
    printf("character = %5d\nspace = %5d\nline_break =%5d\n",others,space,line_break);

    getchar();
    getchar();
    return 0;
}