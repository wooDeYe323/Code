//编写一个程序，要求提示输入一个ASCII码值，然后打印输出的字符
/*#include <stdio.h>
int main(void)
{
    char A;

    printf("请输入一个ASCII码值。\n");
    scanf("%c",&A);
    printf("输入的ASCII码值对应的字符为%d",A);

    getchar();
    getchar();
    getchar();

    return 0;
    

}*/
//答案
#include <stdio.h>

int main(void)
{
    int ch;

    printf("Please you enter a ASCII value:");
    scanf("%d", &ch);
    printf("ASCII %d is %c.\n", ch, ch);

    getchar();//以下两行为自行添加
    getchar();

    return 0;
}

