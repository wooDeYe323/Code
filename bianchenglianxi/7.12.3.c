#include <stdio.h>
int main()
{
    int num;
    int ou = 0,ji = 0;
    int ouhe=0, jihe=0;
    printf("Enter some numbers(0 to quit):");
    while ((num = (getchar())) != '0')
    {
        if(num % 2 == 0)
        {
            ou++;
            ouhe += num;
        }
        if(num % 2 != 0)
        {
            ji++;
            jihe += num;
        }    
    }
    printf("yi gong you %d ge ou shu.",ou);
    printf("zhe xie ou shu de ping jun zhi shi %d.\n",ouhe / ou -48) ;// 注意要减去48，因为num 的类型是字符，即多了48
    printf("yi gong you %d ge ji shu.",ji);
    printf("zhe xie ji shu de ping jun zhi shi %d.\n",jihe / ji -48);

    getchar();
    getchar();

    return 0;
}