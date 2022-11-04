void set_mode(int n);
void get_info(void);
void show_info(void);

#include <stdio.h>
#include "pe12-2b.h"
int main(void)
{
    int mode;

    printf("Enter 0 for metric mode, 1 for US mode: ");
    scanf("%d", &mode);
    while(mode >= 0)
    {
        set_mode(mode);
        get_info();
        show_info();
        printf("Enter 0 for metric mode, 1 for US mode");
        printf("-1 to quit:");
        scanf("%d",&mode);
    }
    printf("Done.\n");
    return 0;
}

