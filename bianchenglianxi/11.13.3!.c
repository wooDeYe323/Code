#include <stdio.h>
#include <ctype.h>
#define LEN 10

char *getword(char *str);

int main(int argc, char *argv[])
{
    char input[LEN];

    printf("Please enter a word (EOF to quit):\n");
    while (getword(input) != NULL)
    {
        printf("Result:\n");
        puts(input);
        printf("You can enter a word again (EOF to quit):\n");
    }
    printf("Done.\n");

    return 0;
}

char *getword(char *str)
{
    int ch;
    int n = 0;
    char *pt = str;

    while ((ch = getchar()) != EOF && isspace(ch))
        continue;
    //↑跳过第一个非空白字符前面的所有空白符;

    if (ch == EOF)
    {
        return NULL;
        //↑若第一次直接输入Ctrl+Z(Windows)或Ctrl+D(Unix/Linux/Mac os)则返回空指针;
    }
    else
    {
        n++;
        *str++ = ch;
        /*↑把第一个非空白字符赋值给str
        所指向的内存空间内并指向下一个
        存储空间;*/
    }
    while ((ch = getchar()) != EOF && !isspace(ch) && (n < LEN - 1))
    {
        *str++ = ch;
        /*↑从第2个字符开始赋值直到
        遇见单词后面第一个空白符;*/
        n++;
    }
    *str = '\0';

    if (ch == EOF)
    {
        return NULL;
        /*↑输入Ctrl+Z(Windows)或Ctrl+D(Unix/Linux/Mac os)返回空指针;*/
    }
    else
    {
        while (getchar() != '\n')
            continue;
        //↑从单词后面丢弃输入行中的其它字符;
        return pt;
    }
}
