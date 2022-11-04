#include <stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    int arr[num-1][2];

    int i,j;
    for(i=0; i<num; i++)
        for(j=0; j<3; j++)
            scanf("%d",&arr[i][j]);
    

    int msum=0;
    int sum[num-1][0];
    for(i=0; i<num; i++)
        {
        for(j=0; j<3; j++)
        {
            msum += arr[i][j];
        }
        sum[i][0] = msum;
        }
    
    int yu_wen;
    int yuwen[num-1][0];
    for (i=0; i<num; i++);
        yuwen[i][0]=arr[i][0];

    int zhong;
    for(i=0; i<num; i++)
        for(j=i+1; j<num; j++)
        {
            if(sum[i][0] < sum[j][0])
            {
                zhong = sum[j][0];
                sum[j][0] = sum[i][0];
                sum[i][0] = zhong;
            }
        }
    for(i=0; i<5; i++)
    {
    printf("%d %d",i,sum[i][0]);
    }


}