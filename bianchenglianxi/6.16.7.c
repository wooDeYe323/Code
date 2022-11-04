#include <stdio.h>
#include <string.h>
int main()
{
    char ch[20];
    printf("Please enter a word:");
    scanf("%s",&ch);

    int a = strlen(ch);  //strlen函数可读取最后一个字符的下标。
    for(; a >= 0;--a)
        printf("%c",ch[a]); 
    getchar();
    getchar();

    return 0;
}