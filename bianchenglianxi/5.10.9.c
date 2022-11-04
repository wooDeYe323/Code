#include <stdio.h>
int main(void)
{
    const int  A = 8;
    int i=0;
    while (++i < A)
        printf("%c\n",i+96);   /* code */

    getchar();

    return 0;

}
#include <stdio.h>

/*  答案真好啊
int main(void)
{
    char ch ='a';
    while (ch <= 'g')
          printf("%5c", ch++);
    printf("\n");

    return 0;

}
*/