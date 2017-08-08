#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,num,sum=0;
printf("enter the count");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
printf("enter the number:");
scanf("%d",&num);
sum=sum+num;
printf("sum is:",sum);
}
getch();
}
