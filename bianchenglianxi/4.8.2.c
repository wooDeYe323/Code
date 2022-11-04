#include <stdio.h>
#include <string.h>
int main(void)
{
    char name[40];
    int a; 

    printf("please enter your name.\n");
    scanf("%s",&name);
    a = strlen(name);                       //stelen() 可作为取值工具
    printf("\"%s\"!\n",name);
    printf("\"%20s\"\n",name);
    printf("\"%-20s\"\n",name);
    printf("%*s\n",a+3,name);

    getchar();
    getchar();

    return 0;
}