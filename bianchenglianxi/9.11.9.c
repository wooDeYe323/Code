//不会递归，恶心！
#include <stdio.h>
double pow(double,double);
int main()
{
    double dishu,zhishu,jieguo;
    printf("fen bie shu ru dishu he zhishu:");
            while(scanf("%lf %lf",&dishu,&zhishu) == 2)
    {
        jieguo = pow(dishu,zhishu);
            printf("%g \ntry again(not q number to quit)",jieguo);
    }
    getchar();
    getchar();

    return 0;
}
double pow(double dishu, double zhishu)
{
    if(dishu == 0 && zhishu != 0)
        return 0;
    if(dishu != 0 && zhishu == 0)
        return 1;
    if(dishu == 0 && zhishu == 0)
    {
        printf("It doesn't make sense.");
        return 0;
    }
    if(zhishu > 0)
    {
        return dishu*pow(dishu, zhishu - 1);
    }
    else
    {
        return 1/dishu*pow(1/dishu, zhishu + 1);
    }
}


