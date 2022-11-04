#include <stdio.h>
#include <string.h>
char * s_gets(char * st, int n)
{
    char * ret_val;
    char * end;
    ret_val =fgets(st,n,stdin);
    
    if(ret_val)
    {
        end = strchr(st,'\n');
        if(end != NULL)     //如果查得到换行符
        *end = '\0';
        else
        while(getchar() != '\n')
            continue;
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