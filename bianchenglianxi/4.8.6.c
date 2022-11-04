#include <stdio.h>
#include <string.h>
int main(void)
{
    char firstname[20];
    char lastname[20];
    int a,b;

    printf("Please enter your first name.\n");
    scanf("%s",&firstname);
    printf("Please enter your last name.\n");
    scanf("%s",&lastname);
    a = strlen(firstname);
    b = strlen(lastname);

    printf("%s %s\n",firstname,lastname);
    printf("%-*d %*d\n",a,a,b,b);               //注意此处要对应四个值。

    getchar();
    getchar();
    
    return 0;

}