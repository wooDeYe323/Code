#include <stdio.h>
#define NUM 8
int main()
{
    printf("Enter %d number:",NUM);
    double a[NUM],b[NUM];
    int i;
    for(i=0;i <= NUM - 1; i++)  
        scanf("%lf",&a[i]);
    for(i=0; i<= NUM - 1; i++)
        {if (i == 0)
         b[i]=a[i];  
         else 
           b[i]=b[i-1]+a[i]; 
        }
    for(i=0; i<=NUM - 1;i++)
        printf("%-3g",a[i]);
    printf("\n");
    for(i=0; i<=NUM - 1;i++)
        printf("%-3g",b[i]);
    printf("\n");

    getchar();  
    getchar();
    return 0;
    
}