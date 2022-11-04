/*
 * 本程序只适用于　Windows　系统，测试平台：
 * Windows XP，Microsoft Visual C++ 6.0 SP6
*/

#include <stdio.h>

int main ( )
{
    char ch1 ;
    char ch2 ;

    scanf ( "%c" , &ch1 ) ;
    printf ( "ch1 = %d" , ch1 ) ;

    fflush(stdin);  /*清空缓冲区，也可以使用rewind(stdin);*/

    scanf ( "%c" , &ch2 ) ;
    printf ( "ch2 = %d" , ch2 ) ;
    getchar();
    getchar();
    return 0 ;
}
