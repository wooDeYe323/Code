// 局限性 只能适用于E之后的字母，只能打印五行。
#include <stdio.h>
int main()
{
    char ch;
    int h,space,up,down,A,B;
    printf("Please enter a characeter which is bigger than E.");
    scanf("%c",&ch);

    for(h = 5; h >= 1; h--)
    {
        for(space = 1; space < h;space++ )//控制空格
        printf(" ");//打印空格
        for(up = 6,A=ch; up > h; up--,A++ )//正序打印，打印到最大值，把ch的值赋给A可以避免都使用ch使得后面倒叙打印时ch的值改变。
        printf("%c",A-4);//因为输入的是E，而金字塔是从A开始的，所以要减4。
        for(down = 5,B=A; down > h; down--,B--)//因为正序打印到最大，所以倒序打印时，第一行不打印，所以down的初始值设为5。把A的值赋给B即可保证是倒序打印。
        printf("%c",B-6);//倒序打印时，从第二行起，A已经循环两次+1,所以A比'E'大2,即A-6 = 'A'。之后的B--与A++抵消，故一直减6。
        printf("\n");
    }  
    getchar();
    getchar();

    return 0; 
}
/* 答案如下
#include <stdio.h>

int main(void)
{
    int i, j;
    char ch;

    printf("Please enter a upper letter: ");
    scanf("%c", &ch);

    int length = ch - 'A';
    //循环次数;
    printf("The pyramid of %c is:\n", ch);
    for (i = 0; i <= length; i++)
    {
        char t = 'A' - 1;
        for (j = 0; j < length - i; j++)
        {
            printf(" ");
        }
        //↑左侧空格数;
        for (j = 0; j <= i; j++)
        {
            printf("%c", ++t);
        }
        //↑打印递增字母;
        for (j = 0; j < i; j++)
        {
            printf("%c", --t);
        }
        //↑打印递减字母
        printf("\n");
    }

    return 0;
}
*/