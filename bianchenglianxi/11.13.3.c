#include <stdio.h>
#include <ctype.h>
char *getword(char * str)
{
    int ch;
    int n = 0;
    char * pt = str;
    while((ch = getchar()) != EOF && isspace(ch))
        continue;
    if(ch ==EOF)
        return NULL;
    else
    {
        n++;
        *str++ = ch;
    }
    while ((ch = getchar()) != EOF && !isspace(ch) && (n < 10))
    {
        *str++ = ch;
        n++;
    }
    *str = '\0';

    if(ch == EOF)
    {
        return NULL;
    }
    else
    {
        while(getchar() != '\n')
            continue;
        return pt;
    }


}
int main()
{
    char a[10];
    printf("Enter a word(EOF to quit):");
    while(getword(a) != NULL)
    {
        printf("Result:\n");
        puts(a);
        printf("Try again(EOF to quit)");
    }
    printf("Done!\n");

    getchar();
    return 0;
}