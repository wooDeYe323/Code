#include <stdio.h>
int main()
{
    int a=0,i=0;
    int ch;
    printf("Enter some characters.\n");
    while((ch = getchar()) != EOF)
    {
        if(ch != '\x20')
        i++;
        if(ch == '\x20')
        {
        a++;
        printf("di %d ge dan ci you %d ge zi mu.\n",a,i);        //连续输入两个空格就不成立了
        }
    }
    getchar();
    getchar();

    return 0;
}