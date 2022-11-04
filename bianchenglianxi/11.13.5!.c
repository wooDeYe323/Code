#include <stdio.h>
#include <string.h>
#define LEN 20

char *s_gets(char *st, int n);
char *mystrchr(char *str, char ch);

int main(int argc, char *argv[])
{
    char ch, input[LEN];

    printf("Please enter a string (EOF to quit):\n");
    while (s_gets(input, LEN) != NULL)
    {
        printf("Please enter a character: ");
        ch = getchar();
        while (getchar() != '\n')
            continue;
        printf("String:\n");
        puts(input);
        if (mystrchr(input, ch) == NULL)
        {
            printf("Not exist %c in the string.\n", ch);
        }
        else
        {
            printf("Exist %c in the string.\n", ch);
        }
        printf("You can enter a string again (EOF to quit):\n");
    }
    printf("Done.\n");

    return 0;
}

char *s_gets(char *st, int n)
{
    char *ret_val;
    char *find;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        find = strchr(st, '\n');
        if (find)
        {
            *find = '\0';
        }
        else
        {
            while (getchar() != '\n')
                continue;
        }
    }
    return ret_val;
}

char *mystrchr(char *str, char ch)
{
    while (*str != '\0')
    {
        if (*str != ch)
        {
            ++str;
        }
        else
        {
            return str;
        }
    }
    return NULL;
}
