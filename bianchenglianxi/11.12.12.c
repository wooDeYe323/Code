#include <stdio.h>
#include <string.h>
char * find(const char * st)        //要加const 不然会警告
{
    char * m;
    if(strchr(st,' ') != NULL)
    return m = strchr(st, ' ');
    else
    return NULL;
    
}
int main()
{
    char * a;
    char * b;
    const char * st = "hello i am xiangyiheng."; //不写const 会警告
    a = find(st);
    printf("%p",a);
    putchar('\n');
    const char * ab = "xiang";
    b = find(ab);
    printf("%p",b);
    
    getchar();
    return 0;
}