#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i,hcf;
printf("enter the values:");
scanf("%d%d",&a,&b);
for(i=0;i<=a&&i<=b;++i)
{
if(a%i==0&&b%i==0)
hcf=1;
printf("the minimum number of:",a,b,hcf);
}
getch();
}
