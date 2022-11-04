#include <stdio.h>
int main()
{
    char ch[26];
    int num;

    for ( num = 0; num <26 ; num++)
    {
       scanf("%c",&ch[num]); /* code */
    }
    for (num = 0; num <26;num++)
        printf("%c",ch[num]);
    getchar();
    getchar();

    return 0;
    
}
//9.20.2022