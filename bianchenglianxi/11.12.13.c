#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define ANSWER "GRANT"
#define SIZE 40
char * s_gets(char * st, int n)
{
    char * ret_val;

    ret_val = fgets(st, n, stdin);
    if(ret_val)
    {
        while (*st != '\n' && *st != '\0')
        st++;                           //跳过非换行符和空字符

        if(*st == '\n')
            *st = '\0';             //替换换行符
        else
            {
            while (getchar() != '\n')           //输入的字符数大于n时，删掉多余的字符
            continue;
            }
        
    }
    return ret_val;
}
char * up(char * st)
{
    while(*st != '\0')
    {
        *st = toupper(*st);  //要加一个*st 不然并未改变st的大小写
        st++;
    }
    return st;
}
int main(void)
{
    char a[SIZE];
    
    puts("Who is burier in Grant's tomb?");
    s_gets(a,SIZE);
    up(a);
    while(strcmp(a, ANSWER) != 0)
    {
        puts("No, that's wrong. Try again.");
        s_gets(a,SIZE);
        up(a);
    }
    puts("Right");

    getchar();
    return 0;
}








