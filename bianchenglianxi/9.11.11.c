#include <stdio.h>
int fibonacci(int);
int main()
{
    int i,sum;
    scanf("%d",&i);
    sum = fibonacci(i);
    printf("%d",sum);
    return 0;
}
int fibonacci(int i)
{
    i=i-2;
    int a,b;
    a=b=1;
    if(i % 2 ==0)
    {
      while (i>=1)
        {
        a=a+b;
        i--;
        if(i==0)
        break;
        b=a+b;
        i--;  
    }
    return b;
    } 
    if(i % 2!= 0)
    {
       while (i>=1)
        {
        a=a+b;
        i--;
        if(i==0)
        break;
        b=a+b;
        i--;
        }
    return a;
    }
}
