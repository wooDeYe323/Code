#include <stdio.h>
int main()
{
    int a,b,num_a,num_b,max=0;
    printf("Enter two number: ");
    while(scanf("%d %d", &a, &b) == 2)
    {
        num_a = a;
        num_b = b;
        if(num_a <=num_b && num_b <7){
        printf("no.\n");
        printf(" try again.(not a number to quit)\n");
        continue;}
        if (num_a >= num_b && num_a <7){
        printf("no.\n");
        printf(" try again.(not a number to quit)\n");
        continue;}  
        
            if(num_a <= num_b)
                for(;num_a <= num_b; num_a++)
            {
                if(num_a % 7 == 0 && num_a % 4 != 0)
                max =num_a;
            }
            else 
                for(;num_a > num_b ; num_b++)
            {
                if(num_b % 7 == 0 && num_b % 4 != 0)
                max = num_b;
            }
            if(max == 0){
            printf("no.\n");
            printf("try again.\n");
            continue;}
        printf("  zui da de xing yun shu zi shi %d \n", max);
        printf(" try again.(not a number to quit)\n");
    }
    
    getchar();
    getchar();
    return 0;
} 
