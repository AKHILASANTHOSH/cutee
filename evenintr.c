#include<stdio.h>
int main()
{
int range1,range2,rem=0,i;
{
printf("enter the first range");
scanf("%d",&range1);
printf("enter the second range");
scanf("%d",&range2);
for(i=range1;i<=range2;++i)
{
rem=i%2;
if(rem==0)
{
printf("%d",i);
}
return 0;
}
}
}
