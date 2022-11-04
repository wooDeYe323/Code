#include <stdio.h>
int main(void)
{
    const  int ten = 10;
    int a;
    int i = 0;

    printf("Please enter a number.\n");
    scanf("%d",&a);
    printf("%d\n",a);
    while (i++ < ten)   
        printf("%d\n",a+i);
    
    getchar();
    getchar();

    return 0;
    

}