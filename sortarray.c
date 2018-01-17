#include<stdio.h>
void main()
{
int num,rev;
printf("enter the number:");
scanf("%d",&num);
while(num!=0)
{
rev=rev*10;
rev=rev+num%10;
num=num/10;
}
printf("sorted array :",rev);
getch();
}
