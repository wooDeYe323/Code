#include <stdio.h>
int main(void)
{
    int f,s,r;
    
    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand:");
    scanf("%d",&s);
    printf("Now enter the first operand:");
    scanf("%d",&f);
    r = f % s;
    printf("%d %% %d is %d\n",f,s,r);
    while (f > 0)
    {
         printf("Enter next number for first operand(<= 0 to quit):");
         scanf("%d",&f);
         r = f % s;
         printf("%d %% %d is %d\n",f,s,r);
    }
    getchar();

    return 0;
}