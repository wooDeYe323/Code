#include <stdio.h>
#define BOOK "War and Peace"
int main(void)
{
    float cost =12.09;
    float percent =80.0;

    printf("This copy of \"%s\" sells for $%.2f.\n", BOOK, cost);
    printf("Thar is %.f%% of list.\n", percent);

    getchar();
    getchar();

    return 0;


}
//9.7.2022