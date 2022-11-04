#include <stdio.h>
int main(void)
{
    char name[40];

    printf("please enter your name.\n");
    scanf("%s",&name);
    printf("Hoo! That's you! %s!\n",name);

    getchar();
    getchar();

    return 0;
}
//2022.9.9