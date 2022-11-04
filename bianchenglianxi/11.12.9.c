#include <stdio.h>
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
int main()
{
    char a[100];            //指针一定要初始化，不然就用数组
    s_gets(a,5);
    printf("%s", a);

    getchar();
    return 0;
}