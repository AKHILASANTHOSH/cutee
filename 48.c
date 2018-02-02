#include<stdio.h>
void main()
{
int n,i,a[i]sum=0;
printf("enter number:");
scanf("%d",&n);
printf("enter numbers one by one:");
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
sum=sum+a[i];
}
avg=sum/n;
printf("average:%d",avg);
}
