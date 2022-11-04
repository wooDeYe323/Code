#include<iostream>
#include<algorithm>
using namespace std;
int a[10000][10]={};
int b[10000]={};
int c[10000]={};
int main()
{
	int n,k,j,i,t=0,m,q=1;
	scanf("%d",&n);
	for(m=1;m<=n;m++)    c[m]=q++;//存储学号. 
	for(i=1;i<=n;i++)
	 { 
		for(j=1;j<=3;j++)
		 {
			scanf("%d",&a[i][j]);//利用二维数组存储成绩单. 
		 }
	 }
	 for(i=1,j=1;i<=n;i++)
	 {
	  b[++t]=a[i][j]+a[i][j+1]+a[i][j+2];
	 }
	 for(i=1;i<=n-1;i++)   //交换排序算法,从n个数中找到最大的然后与第一位交换位置, 
	 {                     //然后再从除了第一位剩下的数中找到最大的数与第二位交换位置,	  
	 	k=i;               //以此类推. 
		 for(j=i+1;j<=n;j++)
		 {
		 	if(b[j]>b[k])  k=j;  //情况一:总分最高 
		 	else if(b[j]==b[k]&&a[j][1]>a[k][1]) k=j;//情况二总分相同比较语文.
			 //因为总分相同语文相同的情况排在前面的本就是学号小的，所以不用再赘述情况三. 
			  
		 } 
	      if(k!=i)
	      {
	      	swap(b[i],b[k]);
	      	swap(c[i],c[k]);//因为结果保留学号, 因此在交换成绩同时也要交换学号. 
		  }
     }
	 for(i=1;i<=5;i++) printf("%d %d\n",c[i],b[i]);//输出前五名. 
	 return 0;	 	 	
 } 
      	 
	