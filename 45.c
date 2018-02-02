#include<stdio.h>
int main()
{
int a,sum=0;
printf("enter the number:");
scanf("%d",&a);
while(a!=0)
{
a=a/10;
sum++;
}
printf("number of digits is:%d",sum);
}
