#include <stdio.h>
void c(char, int, int );
int main()
{
    char ch;
    int a,b;
    printf("Enter a character and two numbers:");
    while(scanf("%c %d %d",&ch,&a,&b) == 3 && ch != '#')
    {
        c(ch,a,b);
        putchar('\n');
        printf("try again(# to quit)");
    }
    getchar();
    getchar();
    
    return 0;
}
void c(char ch, int a, int b)
{
    int i,j;
    for(i=1;i <= a; i++)
    {
        for(j=1;j <= b; j++)
        putchar(ch);
        putchar('\n');
    }
    return ;
    
}