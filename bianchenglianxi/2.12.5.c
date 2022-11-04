#include <stdio.h>
void br(void);        //函数原型
void ic(void);       //函数原型

int main(void)
{
    br();printf(",");ic();
    ic();
    br();

    return 0;

}
void br(void)         //定义br
{
    printf("Brazil,Russia");
}
void ic(void)        //定义ic
{
    printf("India,China\n");
}