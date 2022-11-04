#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character.");
        while ((ch = getchar()) != '#')
    {
        switch ( ch )
    {
    case 'q':
        printf("step 1\nstep 2\nstep 3\n");
        break;
    case 'c':
        printf("step 1\n");
        break;
    case 'h':
        printf("step 1\nstep 3\n");
        break;
    case 'b':
        printf("step 1\nDone\n");
        break;
    default :
        break;
    }
    fflush(stdin);// 如果不加这一行 回车也会被视为一次输入，所以会打印两次下面的printf
    printf("enter another character(# to quit): ");
    } 
    printf("Done");
getchar();
getchar();
return 0;
}