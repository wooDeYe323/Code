//编写一个程序，发出一声警报，然后打印下面的文本。
#include <stdio.h>
int main(void)
{
    printf("\a");
    printf("Startled by the sudden sound, Sally shouted,\n");
    printf("By the Great  Pumpkin, what was that!\n");

    getchar();

    return 0;
}
/*
#include <stdio.h>

int main(void)
{
    printf("\a");
    printf("Startled by the sudden sound, ");
    printf("Sally shouted,\n");
    printf("\"By the Great Pumpkin, what was that!\"\n");

    return 0;
}
*/