#include<stdio.h>
int main()
{
int lim,num,i;
printf("enter the limit:");
scanf("%d",&lim);
printf("enter the num:");
scanf("%d",&num);
for(i=0;i<=lim;i++)
if(i%num==0)
{
printf("%d",i);
}
return 0;
}
