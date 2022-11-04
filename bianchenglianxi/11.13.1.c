#include <stdio.h>
void s_gets(char * a, int n)
{
    int i;
    for(i=0; i<n-1; i++)
    a[i] = getchar();
    a[n] = '\0';

    return ;
    
}
int main()
{
    int n = 10;
    char * a;
    printf("Enter %d characters:",n-1);
    s_gets(a, n);
    puts(a);
    
    return 0;

}