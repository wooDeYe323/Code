#include <stdio.h>
void chline(char, int, int);
int main()
{
    chline('#',3,4);
    getchar();
    getchar();
    return 0;
}
void chline(char a,int i,int j)
{
    int m;
    for(;i>=1;i--)
    {
        for(m=1;m<=j;m++)
        {
        printf("%c",a);
        }
        printf("\n");
    }
    return;
}