#include <stdio.h>
#include <string.h>
char * pt(char *st,char ch)
{
    int num;
    num = strlen(st);
    int i;
    char * ptr;
    for(i=0; i<num; i++)
    {
        if(st[i] == ch)
        {
            ptr = st;
            return ptr;
        }
    }
    if(*st != ch)
    return NULL;
    
}
int main()
{
    char a[100];
    char b;
    char *c;
    scanf("%s",&a);
    scanf("%c",&b);
    while(pt(a,b)!=NULL)
    {
        c = pt;
        scanf("%s %c",&a,&b);
    }
    printf("%c",*pt);

    getchar();
    return 0;
}