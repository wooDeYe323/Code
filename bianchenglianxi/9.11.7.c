#include <stdio.h>
#include <ctype.h>
int type(int);
int main()
{
    int ch;

    printf("Enter some characters:");
    while((ch = getchar()) != EOF )
        {
            type(ch);
            while(getchar() != '\n')
            continue;
        }

    return 0;

}
int type(int ch)
{   
    if(isalpha)
    {
    if(isupper(ch))
    printf("da xie zi mu '%c' zai di %d ge weizhi.",ch,ch-'A'+1);
    if(islower(ch))
    printf("xiao xie zi mu '%c' zai di %d ge weizhi.",ch,ch -'a'+1);
    }
    else 
    printf("Not a letter.");

    return 0;
}
//失败
