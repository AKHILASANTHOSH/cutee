#include<stdio.h>
int main()
{
int n;
printf("enter the number:");
scanf("%d",&n);
if(n%13==0)
{
printf("the number is divisible by 13");
}
else
{
printf("the number is not divisible by 13");
}
return 0;
}
