#include <stdio.h>
#define STOP '#'

int main(void)
{   
    int ch, space, enter, others;
    space = enter = others = 0;

    printf("Please enter some characters ('#' to quit):\n");
    while ((ch = getchar()) != STOP)
    {
        if (ch == ' ')
        {
            space++;
        }
        else if (ch == '\n')        
        {       
            enter++;
        }
        else
        {
            others++;
        }
    }
    printf("Here are the messages\n");
    printf("Space: %d\n", space);
    printf("Linefeed: %d\n", enter);
    printf("Others: %d\n", others);
    
    getchar();
    getchar();

    return 0;
}

/* 2022.9.26
#include <stdio.h>
#include <ctype.h>
int main()
{
    int space = 0;
    int line_break = 0;
    int ch = 0;

    while((ch = getchar()) != '#')
    {
        if(ch = '\n')
        line_break++;
        if(isspace(ch))
        space++;
        if(!isspace(ch))
        ch++;
    }
    printf("character = %5d\nspace = %5d\nline_break =%5d\n",ch,space,line_break);

    getchar();
    getchar();
    return 0;
}
*/