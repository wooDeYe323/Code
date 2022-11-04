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
    double xpow = 1.0;
    int i;
    if(dishu == 0 && zhishu != 0)
        xpow = 0;
    if(dishu != 0 && zhishu == 0)
        xpow = 1;
    if(dishu == 0 && zhishu == 0)
        printf("It doesn't make sense.");
    if(zhishu > 0)
    {
        for(i = 1; i <= zhishu; i++)
            xpow = dishu * xpow;
    }
    else
    {
        for(i = 1; i <= (-zhishu); i++)
            xpow *= 1 / dishu ;
    }

    return xpow;
}

