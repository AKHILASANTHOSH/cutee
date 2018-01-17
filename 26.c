#include<stdio.h>
void main()
{
int n,rev=0;
printf("enter the number:");
scanf("%d",&n);
while(n!=0)
{
re=rev*10;
re=re+n%10;
n=n/10;
}
printf("the sorted array is:",rev);
}
