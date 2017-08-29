#include<stdio.h>
#include<conio.h>
void main()
{
int n,rem,result;
clrscr();
printf("enter the number");
scanf("%d",&n);
if(n!=0)
{
rem=n%10;
n=10;
printf("armstrong number");
}
else
{
printf("not armstrong number");
}
getch();
}
