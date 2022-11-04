#include <stdio.h>
#include <ctype.h>

char * getword(char * str, int num)
{
    int n = 0;
    int ch;
    char * pt = str;

    while((ch = getchar()) != EOF && isspace(ch))
        continue;
    
    if(ch == EOF)
        return NULL;
    else
    {
        n++;
        *str++ = ch;
    }
    while((ch = getchar()) != EOF && !isspace(ch) && (n < num))
    {
        *str++ = ch;
        n++;
    }
    *str = '\0';
    if(ch == EOF)
        return NULL;
    else
    {
        while(getchar() != '\n')
            continue;
        return pt;
    }
}
int main()
{
    int max;
    printf("Enter the max:");
    scanf("%d", &max);
    char  a[max];
    printf("Enter a word ,not over the max limit(EOF to quit)");
    while(getword(a,max-1) != NULL)
    {
        printf("Result:\n");
        puts(a);
        printf("Enter again\n");
    }

    getchar();
    return 0;
}