#include <stdio.h>
int main()
{
    char ch;
    int h,l;

    for(h = 0; h <= 5; ++h) 
      {
        for(l = 0,ch = 'F'; l <= h; l++,ch--)
        printf("%c",ch);
        printf("\n");
        }
      
    getchar();
    getchar();

    return 0;
}