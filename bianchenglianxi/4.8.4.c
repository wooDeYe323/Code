#include <stdio.h>
int main(void)
{
    char name[20];
    float height=1.1;

    printf("Please enter your name.\n");
    scanf("%s",&name);
    printf("Please enter your height in cm.\n");
    scanf("%f",&height);

    printf("%s, you are %g m tall.\n",name,height/100);

    getchar();
    getchar();

    return 0;
}