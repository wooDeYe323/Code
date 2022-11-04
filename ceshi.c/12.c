#include <stdio.h>
int main()
{
    int i;
    int zong;
    scanf("%d",&zong);
    int a[zong];            
    for(i = 0; i < zong; i++)
        scanf("%d",&a[i]);      //数组赋值

    int ct,pct=1;
        for(ct = 1, i = 0; i < zong ;i++)
        {
            if(a[i] + 1 == a[i+1])
            ct++;
            else
            {
                if(pct < ct)
                {
                pct = ct;
                }
                ct =1; //初始化ct
            }
        }
        
    printf("%d",pct);

    getchar();
    getchar();
    return 0;
}