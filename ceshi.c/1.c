#include<stdio.h>
#include <math.h>
int main()
{
    int a,b;
    long long sum=1,i,cishu,weishu;
    long long c;
    scanf("%d %d",&a,&b);
    for(i=1;i<=a;i++)
        sum =sum*2011;
    i=1;
    while((sum / pow(10,i)) >10)
        i++;
    for(weishu = i,cishu = weishu - b;cishu >=1;cishu--)
        {
            c = sum / pow(10,weishu-1);
            sum = sum - c * pow(10,weishu-1);
            weishu--;
        }
    printf("%lld", sum);

    getchar();
    getchar();
    return 0;
}